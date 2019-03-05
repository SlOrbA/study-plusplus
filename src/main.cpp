#include "microServiceController.h"
int main() {
	http_listener listener(L"http://localhost/restdemo");
	listener.support(methods::GET,  handle_get);
	listener.support(methods::POST, handle_post);
	listener.support(methods::PUT,  handle_put);
	listener.support(methods::DEL,  handle_del);

	try {
		listener
			.open()
			.then([&listener]() {})
			.wait();
		while(true);
	} catch (exception const & e) {
		wcout << e.what() << endl;
	}

	return 0;
}
