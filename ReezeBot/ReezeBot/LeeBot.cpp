// ReezeBot.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "LeeBot.h"
#include "sleepy_discord/websocketpp_websocket.h"
using namespace std;
class MyClientClass : public SleepyDiscord::DiscordClient {
public:
	using SleepyDiscord::DiscordClient::DiscordClient;
	void onMessage(SleepyDiscord::Message message) override {
		if (message.startsWith("whcg hello"))
			sendMessage(message.channelID, "Hello " + message.author.username);
	}
};

int main() {
	MyClientClass client("OTM0MDY4OTQyMTE5NTE0MTQy.YeqtfQ.xml0N2SCmzlgB_JsYw0doJwfkJM", ); //토큰 바꿔야함
	client.run();
}