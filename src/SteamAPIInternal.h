// Steamworks SDK 1.56
// sdk/public/steam/steam_api_internal.h

#ifndef STEAM_CALLBACK_BEGIN

struct CallbackMsg_t
{
	int m_hSteamUser; // Specific user to whom this callback applies.
	int m_iCallback; // Callback identifier.  (Corresponds to the k_iCallback enum in the callback structure.)
	char *m_pubParam; // Points to the callback structure
	int m_cubParam; // Size of the data pointed to by m_pubParam
};

enum { k_iSteamUserCallbacks = 100 };
enum { k_iSteamUGCCallbacks = 3400 };

#endif // STEAM_CALLBACK_BEGIN
