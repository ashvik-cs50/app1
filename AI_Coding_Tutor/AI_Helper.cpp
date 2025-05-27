#include "AI_Helper.h"
#include <curl/curl.h>

std::string AI_Helper::callAIAPI(std::string code) {
    CURL* curl;
    CURLcode res;
    std::string response = "Error connecting to AI";

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.openai.com/v1/completions");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "{\"prompt\": \"" + code + "\"}");
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        response = "AI Response Received!";
    }
    return response;
}