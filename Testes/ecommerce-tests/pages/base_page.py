
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support.select import Select


class BasePage():

    def __init__(self, driver):
        """ This function is called every time a new object of the base class is created"""
        self.driver = driver

    def click(self, by_locator):
        """ Performs click on web element whose locator is passed to it"""
        WebDriverWait(self.driver, 10).until(
            EC.visibility_of_element_located(by_locator)).click()

    def enter_text(self, by_locator, text):
        """ Performs text entry of the passed in text, in a web element whose locator is passed to it"""
        return WebDriverWait(self.driver, 10).until(EC.visibility_of_element_located(by_locator)).send_keys(text)

    def get_title(self) -> str:
        """Returns the title of the page"""
        return self.driver.title

    def get_url_page(self) -> str:
        """Returns the title of the page"""
        return self.driver.current_url

    def get_component_text(self, by_locator) -> str:
        """Returns the text of any component"""
        return WebDriverWait(self.driver, 10).until(EC.visibility_of_element_located(by_locator)).text

    def choose(self, by_locator, param):
        """Performs a select choose by value"""
        select = Select(WebDriverWait(self.driver, 10).until(
            EC.visibility_of_element_located(by_locator)))
        select.select_by_value(param)
