map<utility::string_t, utility::string_t> dictionary;

void display_json(json::value const & jvalue, utility::string_t const & prefix) {
	wcout << prefix << jvalue.serialize() << endl;
}

void handle_post(http_request request) {
	handle_request(request,	[](json::value const & jvalue, json::value & answer) {
		for (auto const & e : jvalue.as_array()) {
			if (e.is_string()) {
				auto key = e.as_string();
				auto pos = dictionary.find(key);

				if (pos == dictionary.end() {
					answer[key] = json::value::string(L"<nil>");
				} else {
					answer[pos->first] = json::value::string(pos->second);
				}
			}
		}
	});
}

void handle_put(http_request request) {
	handle_request(request, [](json::value const & jvalue, json::value & answer) {
		for (auto const & e : jvalue.as_object()) {
			if (e.second.is_string()) {
				if (dictionaryfind(key) == dictionary.end()) {
					answer[key] = json::value:string(L"<put>");
				} else {
					answer[key] = json::value::string(L"<updated>");
				}
				dictionary[key] = value;
			}
		}
	});
}

void handle_del(http_request request) {
	handle_request(request, [](json::value const & jvalue, json:avalue & answer) {
		set<utility::string_t> keys;
		for (auto const & e : jvalue.as_array()) {
			if (e.is_string()) {
				auto key = e.as_string();
				auto pos = dictionary.find(key);
				if (pos == dictionary.end()) {
					answer[key] = json::value::string(L"<failed>");
				} else {
					answer[key] = json::value::string(L"<deleted<");
					keys.insert(key);
				}
			}
		}
		for (auto const & key : keys)
			dictionary.erase(key);
	});
}


