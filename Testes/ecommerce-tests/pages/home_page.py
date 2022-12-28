from selenium.webdriver.common.by import By

from pages.base_page import BasePage


class HomePage(BasePage):

    def __init__(self, driver):
        super().__init__(driver)
        self.cart = (By.CSS_SELECTOR, '#shopping_cart_container > a')
        self.filter = (By.CLASS_NAME, 'product_sort_container')

    def filter_name_asc(self):
        self.choose(self.filter, 'hilo')
