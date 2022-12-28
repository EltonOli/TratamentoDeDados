from locust import HttpUser, between, task


class TestLocust(HttpUser):
    wait_time = between(5, 15)

    def aux():
        pass

    @task
    def index(self):
        self.client.get("/")

    @task
    def downloads(self):
        self.client.get("/downloads")

    @task
    def flex(self):
        self.client.get("/flex")
