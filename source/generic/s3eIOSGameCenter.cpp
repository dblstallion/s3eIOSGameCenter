/*
Generic implementation of the s3eIOSGameCenter extension.
This file should perform any platform-indepedentent functionality
(e.g. error checking) before calling platform-dependent implementations.
*/

/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */


#include "s3eIOSGameCenter_internal.h"
s3eResult s3eIOSGameCenterInit()
{
    //Add any generic initialisation code here
    return s3eIOSGameCenterInit_platform();
}

void s3eIOSGameCenterTerminate()
{
    //Add any generic termination code here
    s3eIOSGameCenterTerminate_platform();
}

int32 s3eIOSGameCenterGetInt(s3eIOSGameCenterProperty property)
{
	return s3eIOSGameCenterGetInt_platform(property);
}

const char* s3eIOSGameCenterGetString(s3eIOSGameCenterProperty property)
{
	return s3eIOSGameCenterGetString_platform(property);
}

s3eResult s3eIOSGameCenterAuthenticate(s3eIOSGameCenterAuthenticationCallbackFn authenticationCB, void* userData, s3eBool reuse)
{
	return s3eIOSGameCenterAuthenticate_platform(authenticationCB, userData, reuse);
}

s3eResult s3eIOSGameCenterLoadFriends(s3eIOSGameCenterLoadFriendsCallbackFn loadFriendsCB, void* userData)
{
	return s3eIOSGameCenterLoadFriends_platform(loadFriendsCB, userData);
}

int32 s3eIOSGameCenterGetFriendIDs(char** friendIDs, int maxFriendIDs)
{
	return s3eIOSGameCenterGetFriendIDs_platform(friendIDs, maxFriendIDs);
}

s3eResult s3eIOSGameCenterQueryPlayersActivity(s3eIOSGameCenterActivityCallbackFn queryActivityCB, int playerGroup, void* userData)
{
	return s3eIOSGameCenterQueryPlayersActivity_platform(queryActivityCB, playerGroup, userData);
}

s3eResult s3eIOSGameCenterSetInviteHandler(s3eIOSGameCenterInviteCallbackFn callback)
{
	return s3eIOSGameCenterSetInviteHandler_platform(callback);
}

s3eResult s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterFindPlayersCallbackFn findPlayersCB, void* userData)
{
	return s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest_platform(request, findPlayersCB, userData);
}

s3eResult s3eIOSGameCenterMatchmakerGUI(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterMatchCallbacks* callbacks)
{
	return s3eIOSGameCenterMatchmakerGUI_platform(request, callbacks);
}

s3eResult s3eIOSGameCenterMatchmakerHostedGUI(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterFindPlayersCallbackFn findPlayersCB)
{
	return s3eIOSGameCenterMatchmakerHostedGUI_platform(request, findPlayersCB);
}

s3eBool s3eIOSGameCenterInviteAcceptGUI(void* inviteID, s3eIOSGameCenterMatchCallbacks* callbacks)
{
	return s3eIOSGameCenterInviteAcceptGUI_platform(inviteID, callbacks);
}

s3eResult s3eIOSGameCenterReleaseInvite(void* inviteID)
{
	return s3eIOSGameCenterReleaseInvite_platform(inviteID);
}

s3eResult s3eIOSGameCenterMatchmakerCreateMatch(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterCreateMatchCallbackFn createMatchCB, s3eIOSGameCenterMatchCallbacks* callbacks)
{
	return s3eIOSGameCenterMatchmakerCreateMatch_platform(request, createMatchCB, callbacks);
}

s3eResult s3eIOSGameCenterMatchmakerAddPlayersToMatch(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterAddPlayersToMatchCallbackFn addPlayersCB, void* userData)
{
	return s3eIOSGameCenterMatchmakerAddPlayersToMatch_platform(request, addPlayersCB, userData);
}

void s3eIOSGameCenterCancelMatchmaking()
{
	s3eIOSGameCenterCancelMatchmaking_platform();
}

s3eResult s3eIOSGameCenterMatchDisconnect()
{
	return s3eIOSGameCenterMatchDisconnect_platform();
}

int32 s3eIOSGameCenterMatchGetInt(s3eIOSGameCenterMatchProperty property)
{
	return s3eIOSGameCenterMatchGetInt_platform(property);
}

const char* s3eIOSGameCenterPlayerGetString(s3eIOSGameCenterPlayer* player, s3eIOSGameCenterPlayerProperty property)
{
	return s3eIOSGameCenterPlayerGetString_platform(player, property);
}

int32 s3eIOSGameCenterPlayerGetInt(s3eIOSGameCenterPlayer* player, s3eIOSGameCenterPlayerProperty property)
{
	return s3eIOSGameCenterPlayerGetInt_platform(player, property);
}

int32 s3eIOSGameCenterGetPlayerIDsInMatch(char** playerIDs, int maxPlayerIDs)
{
	return s3eIOSGameCenterGetPlayerIDsInMatch_platform(playerIDs, maxPlayerIDs);
}

s3eResult s3eIOSGameCenterGetPlayers(const char** playerIDs, int numPlayers, s3eIOSGameCenterGetPlayersCallbackFn callback)
{
	return s3eIOSGameCenterGetPlayers_platform(playerIDs, numPlayers, callback);
}

void s3eIOSGameCenterReleasePlayers(s3eIOSGameCenterPlayer** players, int numPlayers)
{
	s3eIOSGameCenterReleasePlayers_platform(players, numPlayers);
}

s3eResult s3eIOSGameCenterSendDataToPlayers(char** playerIDs, int numPlayers, const void* data, int dataLen, s3eIOSGameCenterMatchSendDataMode mode)
{
	return s3eIOSGameCenterSendDataToPlayers_platform(playerIDs, numPlayers, data, dataLen, mode);
}

s3eResult s3eIOSGameCenterSendDataToAllPlayers(const void* data, int dataLen, s3eIOSGameCenterMatchSendDataMode mode)
{
	return s3eIOSGameCenterSendDataToAllPlayers_platform(data, dataLen, mode);
}

s3eResult s3eIOSGameCenterLeaderboardLoadCategories(s3eIOSGameCenterLeaderboardLoadCategoriesCallbackFn loadCategoriesCB)
{
	return s3eIOSGameCenterLeaderboardLoadCategories_platform(loadCategoriesCB);
}

s3eResult s3eIOSGameCenterLeaderboardShowGUI(const char* category, s3eIOSGameCenterTimeScope timeScope)
{
	return s3eIOSGameCenterLeaderboardShowGUI_platform(category, timeScope);
}

s3eIOSGameCenterLeaderboard* s3eIOSGameCenterCreateLeaderboard(const char** playerIDs, int numPlayers)
{
	return s3eIOSGameCenterCreateLeaderboard_platform(playerIDs, numPlayers);
}

int32 s3eIOSGameCenterLeaderboardGetInt(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property)
{
	return s3eIOSGameCenterLeaderboardGetInt_platform(leaderboard, property);
}

s3eResult s3eIOSGameCenterLeaderboardSetInt(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property, int32 value)
{
	return s3eIOSGameCenterLeaderboardSetInt_platform(leaderboard, property, value);
}

const char* s3eIOSGameCenterLeaderboardGetString(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property)
{
	return s3eIOSGameCenterLeaderboardGetString_platform(leaderboard, property);
}

s3eResult s3eIOSGameCenterLeaderboardSetString(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLeaderboardProperty property, const char* value)
{
	return s3eIOSGameCenterLeaderboardSetString_platform(leaderboard, property, value);
}

s3eResult s3eIOSGameCenterLeaderboardLoadScores(s3eIOSGameCenterLeaderboard* leaderboard, s3eIOSGameCenterLoadScoresCallbackFn loadScoresCB)
{
	return s3eIOSGameCenterLeaderboardLoadScores_platform(leaderboard, loadScoresCB);
}

s3eResult s3eIOSGameCenterLeaderboardRelease(s3eIOSGameCenterLeaderboard* leaderboard)
{
	return s3eIOSGameCenterLeaderboardRelease_platform(leaderboard);
}

s3eResult s3eIOSGameCenterReportScore(int64 score, const char* category, s3eIOSGameCenterOperationCompleteCallbackFn callback)
{
	return s3eIOSGameCenterReportScore_platform(score, category, callback);
}

s3eResult s3eIOSGameCenterAchievementsShowGUI()
{
	return s3eIOSGameCenterAchievementsShowGUI_platform();
}

s3eResult s3eIOSGameCenterLoadAchievementInfo(s3eIOSGameCenterLoadAchievementInfoCallbackFn callback)
{
	return s3eIOSGameCenterLoadAchievementInfo_platform(callback);
}

s3eResult s3eIOSGameCenterLoadAchievements(s3eIOSGameCenterLoadAchievementsCallbackFn callback)
{
	return s3eIOSGameCenterLoadAchievements_platform(callback);
}

s3eResult s3eIOSGameCenterAchievementsReset()
{
	return s3eIOSGameCenterAchievementsReset_platform();
}

s3eResult s3eIOSGameCenterReportAchievement(const char* name, int percentComplete, s3eIOSGameCenterOperationCompleteCallbackFn callback)
{
	return s3eIOSGameCenterReportAchievement_platform(name, percentComplete, callback);
}

s3eBool s3eGameCentreVoiceChatIsAllowed()
{
	return s3eGameCentreVoiceChatIsAllowed_platform();
}

s3eResult s3eIOSGameCenterSetVoiceChatUpdateHandler(s3eIOSGameCenterVoiceChatUpdateCallbackFn voiceChatUpdateCB)
{
	return s3eIOSGameCenterSetVoiceChatUpdateHandler_platform(voiceChatUpdateCB);
}

s3eIOSGameCenterVoiceChat* s3eIOSGameCenterVoiceChatOpenChannel(const char* channelName)
{
	return s3eIOSGameCenterVoiceChatOpenChannel_platform(channelName);
}

s3eResult s3eIOSGameCenterVoiceChatCloseChannel(s3eIOSGameCenterVoiceChat* channel)
{
	return s3eIOSGameCenterVoiceChatCloseChannel_platform(channel);
}

int32 s3eIOSGameCenterVoiceChatGetInt(s3eIOSGameCenterVoiceChat* channel, s3eIOSGameCenterVoiceChatProperty property)
{
	return s3eIOSGameCenterVoiceChatGetInt_platform(channel, property);
}

s3eResult s3eIOSGameCenterVoiceChatSetInt(s3eIOSGameCenterVoiceChat* channel, s3eIOSGameCenterVoiceChatProperty property, int32 value)
{
	return s3eIOSGameCenterVoiceChatSetInt_platform(channel, property, value);
}

s3eResult s3eIOSGameCenterVoiceChatSetMute(s3eIOSGameCenterVoiceChat* channel, const char* playerID, s3eBool mute)
{
	return s3eIOSGameCenterVoiceChatSetMute_platform(channel, playerID, mute);
}
