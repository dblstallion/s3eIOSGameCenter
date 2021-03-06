/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
/*
 * This file contains the automatically generated loader-side
 * functions that form part of the extension.
 *
 * This file is awlays compiled into all loaders but compiles
 * to nothing if this extension is not enabled in the loader
 * at build time.
 */
#include "IwDebug.h"
#include "s3eIOSGameCenter_autodefs.h"
#include "s3eEdk.h"
#include "s3eIOSGameCenter.h"
//Declarations of Init and Term functions
extern s3eResult s3eIOSGameCenterInit();
extern void s3eIOSGameCenterTerminate();


const char* s3eIOSGameCenterGetErrorString()
{
#ifdef S3E_STORE_ERROR_STRINGS
    return s3eEdkErrorGetString(S3E_EXT_IOSGAMECENTER_HASH);
#else
    return NULL;
#endif
}

s3eIOSGameCenterError s3eIOSGameCenterGetError()
{
    return (s3eIOSGameCenterError) s3eEdkErrorGet(S3E_EXT_IOSGAMECENTER_HASH);
}

// On platforms that use a seperate UI/OS thread we can autowrap functions
// here.   Note that we can't use the S3E_USE_OS_THREAD define since this
// code is oftern build standalone, outside the main loader build.
#if defined I3D_OS_IPHONE || defined I3D_OS_OSX || defined I3D_OS_LINUX || defined I3D_OS_WINDOWS

static s3eResult s3eIOSGameCenterAuthenticate_wrap(s3eIOSGameCenterAuthenticationCallbackFn authenticationCB, void* userData, s3eBool reuse)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterAuthenticate"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterAuthenticate, 3, authenticationCB, userData, reuse);
}

static s3eResult s3eIOSGameCenterLoadFriends_wrap(s3eIOSGameCenterLoadFriendsCallbackFn loadFriendsCB, void* userData)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterLoadFriends"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterLoadFriends, 2, loadFriendsCB, userData);
}

static s3eResult s3eIOSGameCenterQueryPlayersActivity_wrap(s3eIOSGameCenterActivityCallbackFn queryActivityCB, int playerGroup, void* userData)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterQueryPlayersActivity"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterQueryPlayersActivity, 3, queryActivityCB, playerGroup, userData);
}

static s3eResult s3eIOSGameCenterSetInviteHandler_wrap(s3eIOSGameCenterInviteCallbackFn callback)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterSetInviteHandler"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterSetInviteHandler, 1, callback);
}

static s3eResult s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest_wrap(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterFindPlayersCallbackFn findPlayersCB, void* userData)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest, 3, request, findPlayersCB, userData);
}

static s3eResult s3eIOSGameCenterReleaseInvite_wrap(void* inviteID)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterReleaseInvite"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterReleaseInvite, 1, inviteID);
}

static s3eResult s3eIOSGameCenterMatchmakerCreateMatch_wrap(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterCreateMatchCallbackFn createMatchCB, s3eIOSGameCenterMatchCallbacks* callbacks)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterMatchmakerCreateMatch"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterMatchmakerCreateMatch, 3, request, createMatchCB, callbacks);
}

static s3eResult s3eIOSGameCenterMatchmakerAddPlayersToMatch_wrap(s3eIOSGameCenterMatchRequest* request, s3eIOSGameCenterAddPlayersToMatchCallbackFn addPlayersCB, void* userData)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterMatchmakerAddPlayersToMatch"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterMatchmakerAddPlayersToMatch, 3, request, addPlayersCB, userData);
}

static void s3eIOSGameCenterCancelMatchmaking_wrap()
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterCancelMatchmaking"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterCancelMatchmaking, 0);
}

static s3eResult s3eIOSGameCenterMatchDisconnect_wrap()
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterMatchDisconnect"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterMatchDisconnect, 0);
}

static s3eResult s3eIOSGameCenterGetPlayers_wrap(const char** playerIDs, int numPlayers, s3eIOSGameCenterGetPlayersCallbackFn callback)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterGetPlayers"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterGetPlayers, 3, playerIDs, numPlayers, callback);
}

static s3eResult s3eIOSGameCenterLeaderboardLoadCategories_wrap(s3eIOSGameCenterLeaderboardLoadCategoriesCallbackFn loadCategoriesCB)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterLeaderboardLoadCategories"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterLeaderboardLoadCategories, 1, loadCategoriesCB);
}

static s3eBool s3eGameCentreVoiceChatIsAllowed_wrap()
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eGameCentreVoiceChatIsAllowed"));
    return (s3eBool)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eGameCentreVoiceChatIsAllowed, 0);
}

static s3eIOSGameCenterVoiceChat* s3eIOSGameCenterVoiceChatOpenChannel_wrap(const char* channelName)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterVoiceChatOpenChannel"));
    return (s3eIOSGameCenterVoiceChat*)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterVoiceChatOpenChannel, 1, channelName);
}

static s3eResult s3eIOSGameCenterVoiceChatCloseChannel_wrap(s3eIOSGameCenterVoiceChat* channel)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterVoiceChatCloseChannel"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterVoiceChatCloseChannel, 1, channel);
}

static int32 s3eIOSGameCenterVoiceChatGetInt_wrap(s3eIOSGameCenterVoiceChat* channel, s3eIOSGameCenterVoiceChatProperty property)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterVoiceChatGetInt"));
    return (int32)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterVoiceChatGetInt, 2, channel, property);
}

static s3eResult s3eIOSGameCenterVoiceChatSetInt_wrap(s3eIOSGameCenterVoiceChat* channel, s3eIOSGameCenterVoiceChatProperty property, int32 value)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterVoiceChatSetInt"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterVoiceChatSetInt, 3, channel, property, value);
}

static s3eResult s3eIOSGameCenterVoiceChatSetMute_wrap(s3eIOSGameCenterVoiceChat* channel, const char* playerID, s3eBool mute)
{
    IwTrace(IOSGAMECENTER_VERBOSE, ("calling s3eIOSGameCenter func on main thread: s3eIOSGameCenterVoiceChatSetMute"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eIOSGameCenterVoiceChatSetMute, 3, channel, playerID, mute);
}

#define s3eIOSGameCenterAuthenticate s3eIOSGameCenterAuthenticate_wrap
#define s3eIOSGameCenterLoadFriends s3eIOSGameCenterLoadFriends_wrap
#define s3eIOSGameCenterQueryPlayersActivity s3eIOSGameCenterQueryPlayersActivity_wrap
#define s3eIOSGameCenterSetInviteHandler s3eIOSGameCenterSetInviteHandler_wrap
#define s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest_wrap
#define s3eIOSGameCenterReleaseInvite s3eIOSGameCenterReleaseInvite_wrap
#define s3eIOSGameCenterMatchmakerCreateMatch s3eIOSGameCenterMatchmakerCreateMatch_wrap
#define s3eIOSGameCenterMatchmakerAddPlayersToMatch s3eIOSGameCenterMatchmakerAddPlayersToMatch_wrap
#define s3eIOSGameCenterCancelMatchmaking s3eIOSGameCenterCancelMatchmaking_wrap
#define s3eIOSGameCenterMatchDisconnect s3eIOSGameCenterMatchDisconnect_wrap
#define s3eIOSGameCenterGetPlayers s3eIOSGameCenterGetPlayers_wrap
#define s3eIOSGameCenterLeaderboardLoadCategories s3eIOSGameCenterLeaderboardLoadCategories_wrap
#define s3eGameCentreVoiceChatIsAllowed s3eGameCentreVoiceChatIsAllowed_wrap
#define s3eIOSGameCenterVoiceChatOpenChannel s3eIOSGameCenterVoiceChatOpenChannel_wrap
#define s3eIOSGameCenterVoiceChatCloseChannel s3eIOSGameCenterVoiceChatCloseChannel_wrap
#define s3eIOSGameCenterVoiceChatGetInt s3eIOSGameCenterVoiceChatGetInt_wrap
#define s3eIOSGameCenterVoiceChatSetInt s3eIOSGameCenterVoiceChatSetInt_wrap
#define s3eIOSGameCenterVoiceChatSetMute s3eIOSGameCenterVoiceChatSetMute_wrap

#endif

void s3eIOSGameCenterRegisterExt()
{
    /* fill in the function pointer struct for this extension */
    void* funcPtrs[48];
    funcPtrs[0] = (void*)s3eIOSGameCenterGetErrorString;
    funcPtrs[1] = (void*)s3eIOSGameCenterGetError;
    funcPtrs[2] = (void*)s3eIOSGameCenterGetInt;
    funcPtrs[3] = (void*)s3eIOSGameCenterGetString;
    funcPtrs[4] = (void*)s3eIOSGameCenterAuthenticate;
    funcPtrs[5] = (void*)s3eIOSGameCenterLoadFriends;
    funcPtrs[6] = (void*)s3eIOSGameCenterGetFriendIDs;
    funcPtrs[7] = (void*)s3eIOSGameCenterQueryPlayersActivity;
    funcPtrs[8] = (void*)s3eIOSGameCenterSetInviteHandler;
    funcPtrs[9] = (void*)s3eIOSGameCenterMatchmakerFindPlayersForHostedRequest;
    funcPtrs[10] = (void*)s3eIOSGameCenterMatchmakerGUI;
    funcPtrs[11] = (void*)s3eIOSGameCenterMatchmakerHostedGUI;
    funcPtrs[12] = (void*)s3eIOSGameCenterInviteAcceptGUI;
    funcPtrs[13] = (void*)s3eIOSGameCenterReleaseInvite;
    funcPtrs[14] = (void*)s3eIOSGameCenterMatchmakerCreateMatch;
    funcPtrs[15] = (void*)s3eIOSGameCenterMatchmakerAddPlayersToMatch;
    funcPtrs[16] = (void*)s3eIOSGameCenterCancelMatchmaking;
    funcPtrs[17] = (void*)s3eIOSGameCenterMatchDisconnect;
    funcPtrs[18] = (void*)s3eIOSGameCenterMatchGetInt;
    funcPtrs[19] = (void*)s3eIOSGameCenterPlayerGetString;
    funcPtrs[20] = (void*)s3eIOSGameCenterPlayerGetInt;
    funcPtrs[21] = (void*)s3eIOSGameCenterGetPlayerIDsInMatch;
    funcPtrs[22] = (void*)s3eIOSGameCenterGetPlayers;
    funcPtrs[23] = (void*)s3eIOSGameCenterReleasePlayers;
    funcPtrs[24] = (void*)s3eIOSGameCenterSendDataToPlayers;
    funcPtrs[25] = (void*)s3eIOSGameCenterSendDataToAllPlayers;
    funcPtrs[26] = (void*)s3eIOSGameCenterLeaderboardLoadCategories;
    funcPtrs[27] = (void*)s3eIOSGameCenterLeaderboardShowGUI;
    funcPtrs[28] = (void*)s3eIOSGameCenterCreateLeaderboard;
    funcPtrs[29] = (void*)s3eIOSGameCenterLeaderboardGetInt;
    funcPtrs[30] = (void*)s3eIOSGameCenterLeaderboardSetInt;
    funcPtrs[31] = (void*)s3eIOSGameCenterLeaderboardGetString;
    funcPtrs[32] = (void*)s3eIOSGameCenterLeaderboardSetString;
    funcPtrs[33] = (void*)s3eIOSGameCenterLeaderboardLoadScores;
    funcPtrs[34] = (void*)s3eIOSGameCenterLeaderboardRelease;
    funcPtrs[35] = (void*)s3eIOSGameCenterReportScore;
    funcPtrs[36] = (void*)s3eIOSGameCenterAchievementsShowGUI;
    funcPtrs[37] = (void*)s3eIOSGameCenterLoadAchievementInfo;
    funcPtrs[38] = (void*)s3eIOSGameCenterLoadAchievements;
    funcPtrs[39] = (void*)s3eIOSGameCenterAchievementsReset;
    funcPtrs[40] = (void*)s3eIOSGameCenterReportAchievement;
    funcPtrs[41] = (void*)s3eGameCentreVoiceChatIsAllowed;
    funcPtrs[42] = (void*)s3eIOSGameCenterSetVoiceChatUpdateHandler;
    funcPtrs[43] = (void*)s3eIOSGameCenterVoiceChatOpenChannel;
    funcPtrs[44] = (void*)s3eIOSGameCenterVoiceChatCloseChannel;
    funcPtrs[45] = (void*)s3eIOSGameCenterVoiceChatGetInt;
    funcPtrs[46] = (void*)s3eIOSGameCenterVoiceChatSetInt;
    funcPtrs[47] = (void*)s3eIOSGameCenterVoiceChatSetMute;

    /*
     * Flags that specify the extension's use of locking and stackswitching
     */
    int flags[48] = { 0 };

    /*
     * Register the extension
     */
    s3eEdkRegister("s3eIOSGameCenter", funcPtrs, sizeof(funcPtrs), flags, s3eIOSGameCenterInit, s3eIOSGameCenterTerminate, 0);
}

#if !defined S3E_BUILD_S3ELOADER

#if defined S3E_EDK_USE_STATIC_INIT_ARRAY
int s3eIOSGameCenterStaticInit()
{
    void** p = g_StaticInitArray;
    void* end = p + g_StaticArrayLen;
    while (*p) p++;
    if (p < end)
        *p = (void*)&s3eIOSGameCenterRegisterExt;
    return 0;
}

int g_s3eIOSGameCenterVal = s3eIOSGameCenterStaticInit();

#elif defined S3E_EDK_USE_DLLS
S3E_EXTERN_C S3E_DLL_EXPORT void RegisterExt()
{
    s3eIOSGameCenterRegisterExt();
}
#endif

#endif
