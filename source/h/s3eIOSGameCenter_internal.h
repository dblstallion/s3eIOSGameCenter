/*
 * Internal header for the s3eIOSGameCenter extension.
 *
 * This file should be used for any common function definitions etc that need to
 * be shared between the platform-dependent and platform-indepdendent parts of
 * this extension.
 */

/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */


#ifndef S3EIOSGAMECENTER_INTERNAL_H
#define S3EIOSGAMECENTER_INTERNAL_H

#include "s3eTypes.h"
#include "s3eIOSGameCenter.h"
#include "s3eIOSGameCenter_autodefs.h"

// TODO internal callbacks here
typedef enum s3eIOSGameCenterCallback
{
        S3E_IOSGAMECENTER_CALLBACK_AUTHENTICATION, // todo: label these (pretty self explanitory)
        S3E_IOSGAMECENTER_CALLBACK_LOAD_FRIENDS,
        S3E_IOSGAMECENTER_CALLBACK_FIND_PLAYERS,
        S3E_IOSGAMECENTER_CALLBACK_QUERY_ACTIVITY,
        S3E_IOSGAMECENTER_CALLBACK_INVITE,
        S3E_IOSGAMECENTER_CALLBACK_CREATE_MATCH,
        S3E_IOSGAMECENTER_CALLBACK_ADD_PLAYERS_TO_MATCH,
        S3E_IOSGAMECENTER_CALLBACK_CONNECTION_FAILURE, // this event is used to report the application failing to connect with any players (starting the match failed)
        S3E_IOSGAMECENTER_CALLBACK_CONNECT_TO_PLAYER_FAILURE, // this event is used to report the application failing to transmit data to a specific player
        S3E_IOSGAMECENTER_CALLBACK_PLAYER_STATE_CHANGE, // this event is used to report a player connecting to or disconnecting from the match
        S3E_IOSGAMECENTER_CALLBACK_RECEIVE_DATA, // this event is used to report recieving data from another player in the match
        S3E_IOSGAMECENTER_CALLBACK_RECEIVE_PLAYERS, // this event is used to report recieving the list of players in the match
        S3E_IOSGAMECENTER_CALLBACK_LEADERBOARD_LOAD_CATEGORIES,
        S3E_IOSGAMECENTER_CALLBACK_LEADERBOARD_LOAD_SCORES,
        S3E_IOSGAMECENTER_CALLBACK_REPORT_SCORE,
        S3E_IOSGAMECENTER_CALLBACK_LOAD_ACHIEVEMENTS,
        S3E_IOSGAMECENTER_CALLBACK_LOAD_ACHIEVEMENT_INFO,
        S3E_IOSGAMECENTER_CALLBACK_REPORT_ACHIEVEMENT,
        S3E_IOSGAMECENTER_CALLBACK_VOICE_CHAT_UPDATE,
        S3E_IOSGAMECENTER_CALLBACK_MAX
} s3eIOSGameCenterCallback;

typedef int32 (*s3eIOSGameCenterCallbackFn)(struct s3eIOSGameCenterMatch* search, void* sysData, void* userData);

/**
 * Initialise the extension.  This is called once then the extension is first
 * accessed by s3eregister.  If this function returns S3E_RESULT_ERROR the
 * extension will be reported as not-existing on the device.
 */
s3eResult s3eIOSGameCenterInit();

/**
 * Platform-specific initialisation, implemented on each platform
 */
s3eResult s3eIOSGameCenterInit_platform();

/**
 * Terminate the extension.  This is called once on shutdown, but only if the
 * extension was loader and Init() was successful.
 */
void s3eIOSGameCenterTerminate();

/**
 * Platform-specific termination, implemented on each platform
 */
void s3eIOSGameCenterTerminate_platform();
int32 s3eIOSGameCenterGetInt_platform(s3eIOSGameCenterProperty property);

const char* s3eIOSGameCenterGetString_platform(s3eIOSGameCenterProperty property);

s3eResult s3eIOSGameCenterAuthenticate_platform(s3eIOSGameCenterAuthenticationCallbackFn authenticationCB, void* userData, s3eBool reuse);

s3eResult s3eIOSGameCenterLoadFriends_platform(s3eIOSGameCenterLoadFriendsCallbackFn loadFriendsCB, void* userData);

int32 s3eIOSGameCenterGetFriendIDs_platform(char** friendIDs, int maxFriendIDs);

s3eResult s3eIOSGameCenterQueryPlayersActivity_platform(s3eIOSGameCenterActivityCallbackFn queryActivityCB, int playerGroup, void* userData);

s3eResult s3eIOSGameCenterSetInviteHandler_platform(s3eIOSGameCenterInviteCallbackFn callback);

s3eResult s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest_platform(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterFindPlayersCallbackFn findPlayersCB, void* userData);

s3eResult s3eIOSGameCenterMatchmakerGUI_platform(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterMatchCallbacks* callbacks);

s3eResult s3eIOSGameCenterMatchmakerHostedGUI_platform(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterFindPlayersCallbackFn findPlayersCB);

s3eBool s3eIOSGameCenterInviteAcceptGUI_platform(void* inviteID, s3eIOSGameCenterMatchCallbacks* callbacks);

s3eResult s3eIOSGameCenterReleaseInvite_platform(void* inviteID);

s3eResult s3eIOSGameCenterMatchmakerCreateMatch_platform(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterCreateMatchCallbackFn createMatchCB, s3eIOSGameCenterMatchCallbacks* callbacks);

s3eResult s3eIOSGameCenterMatchmakerAddPlayersToMatch_platform(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterAddPlayersToMatchCallbackFn addPlayersCB, void* userData);

void s3eIOSGameCenterCancelMatchmaking_platform();

s3eResult s3eIOSGameCenterMatchDisconnect_platform();

int32 s3eIOSGameCenterMatchGetInt_platform(s3eIOSGameCenterMatchProperty property);

const char* s3eIOSGameCenterPlayerGetString_platform(s3eIOSGameCenterPlayer* player, s3eIOSGameCenterPlayerProperty property);

int32 s3eIOSGameCenterPlayerGetInt_platform(s3eIOSGameCenterPlayer* player, s3eIOSGameCenterPlayerProperty property);

int32 s3eIOSGameCenterGetPlayerIDsInMatch_platform(char** playerIDs, int maxPlayerIDs);

s3eResult s3eIOSGameCenterGetPlayers_platform(const char** playerIDs, int numPlayers, s3eIOSGameCenterGetPlayersCallbackFn callback);

void s3eIOSGameCenterReleasePlayers_platform(s3eIOSGameCenterPlayer** players, int numPlayers);

s3eResult s3eIOSGameCenterSendDataToPlayers_platform(char** playerIDs, int numPlayers, const void* data, int dataLen, s3eIOSGameCenterMatchSendDataMode mode);

s3eResult s3eIOSGameCenterSendDataToAllPlayers_platform(const void* data, int dataLen, s3eIOSGameCenterMatchSendDataMode mode);

s3eResult s3eIOSGameCenterLeaderboardLoadCategories_platform(s3eIOSGameCenterLeaderboardLoadCategoriesCallbackFn loadCategoriesCB);

s3eResult s3eIOSGameCenterLeaderboardShowGUI_platform(const char* category, s3eIOSGameCenterTimeScope timeScope);

s3eIOSGameCenterLeaderboard* s3eIOSGameCenterCreateLeaderboard_platform(const char** playerIDs, int numPlayers);

int32 s3eIOSGameCenterLeaderboardGetInt_platform(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property);

s3eResult s3eIOSGameCenterLeaderboardSetInt_platform(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property, int32 value);

const char* s3eIOSGameCenterLeaderboardGetString_platform(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property);

s3eResult s3eIOSGameCenterLeaderboardSetString_platform(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property, const char* value);

s3eResult s3eIOSGameCenterLeaderboardLoadScores_platform(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLoadScoresCallbackFn loadScoresCB);

s3eResult s3eIOSGameCenterLeaderboardRelease_platform(s3eIOSGameCenterLeaderboard* leaderboard);

s3eResult s3eIOSGameCenterReportScore_platform(int64 score, const char* category, s3eIOSGameCenterOperationCompleteCallbackFn callback);

s3eResult s3eIOSGameCenterAchievementsShowGUI_platform();

s3eResult s3eIOSGameCenterLoadAchievementInfo_platform(s3eIOSGameCenterLoadAchievementInfoCallbackFn callback);

s3eResult s3eIOSGameCenterLoadAchievements_platform(s3eIOSGameCenterLoadAchievementsCallbackFn callback);

s3eResult s3eIOSGameCenterAchievementsReset_platform();

s3eResult s3eIOSGameCenterReportAchievement_platform(const char* name, int percentComplete, s3eIOSGameCenterOperationCompleteCallbackFn callback);

s3eBool s3eGameCentreVoiceChatIsAllowed_platform();

s3eResult s3eIOSGameCenterSetVoiceChatUpdateHandler_platform(s3eIOSGameCenterVoiceChatUpdateCallbackFn voiceChatUpdateCB);

s3eIOSGameCenterVoiceChat* s3eIOSGameCenterVoiceChatOpenChannel_platform(const char* channelName);

s3eResult s3eIOSGameCenterVoiceChatCloseChannel_platform(s3eIOSGameCenterVoiceChat* channel);

int32 s3eIOSGameCenterVoiceChatGetInt_platform(s3eIOSGameCenterVoiceChat* channel, s3eIOSGameCenterVoiceChatProperty property);

s3eResult s3eIOSGameCenterVoiceChatSetInt_platform(s3eIOSGameCenterVoiceChat* channel, s3eIOSGameCenterVoiceChatProperty property, int32 value);

s3eResult s3eIOSGameCenterVoiceChatSetMute_platform(s3eIOSGameCenterVoiceChat* channel, const char* playerID, s3eBool mute);


#endif /* !S3EIOSGAMECENTER_INTERNAL_H */