#include "SteamAPIInternal.h"

#ifndef CSTEAMID_DEFINED
#define CSTEAMID_DEFINED

class CSteamID {
public:
    void SetFromUint64( unsigned long long ulSteamID )
    {
        m_steamid.m_unAll64Bits = ulSteamID;
    }

    unsigned long long ConvertToUint64() const
    {
        return m_steamid.m_unAll64Bits;
    }

private:
    // 64 bits total
    union SteamID_t
    {
        unsigned long long m_unAll64Bits;
    } m_steamid;
};

#endif // CSTEAMID_DEFINED

class SteamUser
{
public:
    virtual void GetHSteamUser(void);
    virtual void LogOn(CSteamID);
    virtual void LogOnWithPassword(char const*,char const*);
    virtual void LogOnAndCreateNewSteamAccountIfNeeded(void);
    virtual void VerifyOfflineLogon(void);
    virtual void LogOff(void);
    virtual int BLoggedOn(void);
    virtual int GetLogonState(void);
    virtual int BConnected(void);
    virtual void BTryingToLogin(void);
    virtual CSteamID GetSteamID(void);
    virtual void GetConsoleSteamID(void);
    virtual void GetClientInstanceID(void);
    virtual void IsVACBanned(unsigned int);
    virtual void SetEmail(char const*);
    virtual void SetConfigString(int,char const*,char const*);
    virtual void GetConfigString(int,char const*,char *,int);
    virtual void SetConfigInt(int,char const*,int);
    virtual void GetConfigInt(int,char const*,int *);
    virtual void SetConfigBinaryBlob(int,char const*,int *);
    virtual void GetConfigBinaryBlob(int,char const*,int *);
    virtual void DeleteConfigKey(int,char const*);
    virtual void GetConfigStoreKeyName(int,char const*,char *,int);
    virtual void InitiateGameConnection(void *,int,CSteamID,int,unsigned int,unsigned short,bool);
    virtual void InitiateGameConnectionOld(void *,int,CSteamID,int,unsigned int,unsigned short,bool,void *,int);
    virtual void TerminateGameConnection(unsigned int,unsigned short);
    virtual void SignalAppsToShutDown(int);
    virtual void TerminateAppMultiStep(int,unsigned int);
    virtual void SetSelfAsChatDestination(bool);
    virtual void IsPrimaryChatDestination(void);
    virtual void RequestLegacyCDKey(unsigned int);
    virtual void AckGuestPass(char const*);
    virtual void RedeemGuestPass(char const*);
    virtual void GetGuestPassToGiveCount(void);
    virtual void GetGuestPassToRedeemCount(void);
    virtual void GetGuestPassToGiveInfo(unsigned int,unsigned long long *,unsigned int *,unsigned int *,unsigned int *,unsigned int *,unsigned int *,char *,int);
    virtual void GetGuestPassToGiveOut(unsigned int);
    virtual void GetGuestPassToRedeem(unsigned int);
    virtual void GetGuestPassToRedeemInfo(unsigned int,unsigned long long *,unsigned int *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
    virtual void GetGuestPassToRedeemSenderName(unsigned int,char *,int);
    virtual void GetNumAppsInGuestPassesToRedeem(void);
    virtual void GetAppsInGuestPassesToRedeem(unsigned int *,unsigned int);
    virtual void GetCountUserNotifications(void);
    virtual void GetCountUserNotification(int);
    virtual void RequestStoreAuthURL(char const*);
    virtual void SetLanguage(char const*);
    virtual void TrackAppUsageEvent(int,int,char const*);
    virtual void RaiseConnectionPriority(int,int);
    virtual void ResetConnectionPriority(int);
    virtual bool BHasCachedCredentials(char const*);
    virtual int SetAccountNameForCachedCredentialLogin(char const*,bool);
    virtual void DestroyCachedCredentials(char const*);
    virtual void GetCurrentWebAuthToken(char *,int,char *,int);
    virtual void RequestWebAuthToken(void);
    virtual void SetLoginInformation(char const*,char const*,bool);
    virtual void SetTwoFactorCode(char const*);
    virtual void ClearAllLoginInformation(void);
    virtual void BEnableEmbeddedClient(unsigned int);
    virtual void ResetEmbeddedClient(unsigned int);
    virtual void BHasEmbeddedClientToken(unsigned int);
    virtual void RequestEmbeddedClientToken(unsigned int);
    virtual void AuthorizeNewDevice(unsigned int,unsigned int,char const*);
    virtual void GetLanguage(char *,int);
    virtual void BIsCyberCafe(void);
    virtual void BIsAcademicAccount(void);
    virtual void BIsPortal2EducationAccount(void);
    virtual void BIsAlienwareDemoAccount(void);
    virtual void TrackNatTraversalStat(int const*);
    virtual void TrackSteamUsageEvent(int,unsigned char const*,unsigned int);
    virtual void TrackSteamGUIUsage(char const*);
    virtual void SetComputerInUse(void);
    virtual void BIsGameRunning(int);
    virtual void BIsGameWindowReady(int);
    virtual void BUpdateAppOwnershipTicket(unsigned int,bool);
    virtual void RequestCustomBinary(char const*,unsigned int,bool,bool);
    virtual void GetCustomBinariesState(unsigned int,long long *,long long *);
    virtual void RequestCustomBinaries(unsigned int,bool,bool,unsigned int *);
    virtual void SetCellID(unsigned int);
    virtual void GetUserBaseFolder(void);
    virtual void GetUserDataFolder(int,char *,int);
    virtual void GetUserConfigFolder(char *,int);
    virtual void GetAccountName(char *,unsigned int);
    virtual void GetAccountName(CSteamID,char *,unsigned int);
    virtual void IsPasswordRemembered(void);
    virtual void CheckoutSiteLicenseSeat(unsigned int);
    virtual void GetAvailableSeats(unsigned int);
    virtual void GetAssociatedSiteName(void);
    virtual void BIsRunningInCafe(void);
    virtual void BAllowCachedCredentialsInCafe(void);
    virtual void RequiresLegacyCDKey(unsigned int,bool *);
    virtual void GetLegacyCDKey(unsigned int,char *,int);
    virtual void SetLegacyCDKey(unsigned int,char const*);
    virtual void WriteLegacyCDKey(unsigned int);
    virtual void RemoveLegacyCDKey(unsigned int);
    virtual void RequestLegacyCDKeyFromApp(unsigned int,unsigned int,unsigned int);
    virtual void BIsAnyGameRunning(void);
    virtual void GetSteamGuardDetails(void);
    virtual void GetTwoFactorDetails(void);
    virtual void BHasTwoFactor(void);
    virtual void GetEmail(char *,int,bool *);
    virtual void FindAccountsByCdKey(char const*);
    virtual void Test_FakeConnectionTimeout(void);
    virtual void RunInstallScript(unsigned int,char const*,bool);
    virtual void IsInstallScriptRunning(void);
    virtual void GetInstallScriptState(char *,unsigned int,unsigned int *,unsigned int *);
    virtual void SpawnProcess(char const*,char const*,unsigned int,char const*,int,char const*,unsigned int,unsigned int,unsigned int);
    virtual void GetAppOwnershipTicketLength(unsigned int);
    virtual void GetAppOwnershipTicketData(unsigned int,void *,unsigned int);
    virtual void GetAppOwnershipTicketExtendedData(unsigned int,void *,unsigned int,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
    virtual void GetMarketingMessageCount(void);
    virtual void GetMarketingMessage(int,unsigned long long *,char *,int,void *);
    virtual void GetAuthSessionTicket(void *,int,unsigned int *);
    virtual void BeginAuthSession(void const*,int,CSteamID);
    virtual void EndAuthSession(CSteamID);
    virtual void CancelAuthTicket(unsigned int);
    virtual void IsUserSubscribedAppInTicket(CSteamID,unsigned int);
    virtual void GetAuthSessionTicketForGameID(void *,int,unsigned int *,int);
    virtual void AdvertiseGame(int,CSteamID,unsigned int,unsigned short);
    virtual void RequestEncryptedAppTicket(void *,int);
    virtual void GetEncryptedAppTicket(void *,int,unsigned int *);
    virtual void GetGameBadgeLevel(int,bool);
    virtual void GetPlayerSteamLevel(void);
    virtual void SetAccountLimited(bool);
    virtual void BIsAccountLimited(void);
    virtual void SetAccountCommunityBanned(bool);
    virtual void BIsAccountCommunityBanned(void);
    virtual void SetLimitedAccountCanInviteFriends(bool);
    virtual void BLimitedAccountCanInviteFriends(void);
    virtual void SendValidationEmail(void);
    virtual void BGameConnectTokensAvailable(void);
    virtual void NumGamesRunning(void);
    virtual void GetRunningGameID(int);
    virtual void GetRunningGamePID(int);
    virtual void RaiseWindowForGame(int);
    virtual void GetAccountSecurityPolicyFlags(void);
    virtual void SetClientStat(int,long long,unsigned int,unsigned int,unsigned int);
    virtual void VerifyPassword(char const*);
    virtual void BSupportUser(void);
    virtual void BNeedsSSANextSteamLogon(void);
    virtual void ClearNeedsSSANextSteamLogon(void);
    virtual void BIsAppOverlayEnabled(int);
    virtual void BOverlayIgnoreChildProcesses(int);
    virtual void BIsBehindNAT(void);
    virtual void GetMicroTxnAppID(unsigned long long);
    virtual void GetMicroTxnOrderID(unsigned long long);
    virtual void BGetMicroTxnPrice(unsigned long long,int *,int *,bool *,int *);
    virtual void GetMicroTxnLineItemCount(unsigned long long);
    virtual void BGetMicroTxnLineItem(unsigned long long,unsigned int,int *,unsigned int *,char *,unsigned int,int *,unsigned char *,int *,bool *);
    virtual void BIsSandboxMicroTxn(unsigned long long,bool *);
    virtual void BMicroTxnRequiresCachedPmtMethod(unsigned long long,bool *);
    virtual void AuthorizeMicroTxn(unsigned long long,int);
    virtual void BGetWalletBalance(bool *,int *,int *);
    virtual void RequestMicroTxnInfo(unsigned long long);
    virtual void BMicroTxnRefundable(unsigned long long);
    virtual void BGetAppMinutesPlayed(unsigned int,int *,int *);
    virtual void GetAppLastPlayedTime(unsigned int);
    virtual void GetAppUpdateDisabledSecondsRemaining(unsigned int);
    virtual void BGetGuideURL(unsigned int,char *,unsigned int);
    virtual void BPromptToVerifyEmail(void);
    virtual void BPromptToChangePassword(void);
    virtual void BAccountExtraSecurity(void);
    virtual void BAccountShouldShowLockUI(void);
    virtual void GetCountAuthedComputers(void);
    virtual void BSteamGuardNewMachineNotification(void);
    virtual void GetSteamGuardEnabledTime(void);
    virtual void GetSteamGuardHistoryEntry(int,unsigned int *,unsigned int *,bool *,char *,int,char *,int);
    virtual void SetSteamGuardNewMachineDialogResponse(bool,bool);
    virtual void SetPhoneIsVerified(bool);
    virtual void BIsPhoneVerified(void);
    virtual void SetPhoneIsIdentifying(bool);
    virtual void BIsPhoneIdentifying(void);
    virtual void SetPhoneIsRequiringVerification(bool);
    virtual void BIsPhoneRequiringVerification(void);
    virtual void ChangeTwoFactorAuthOptions(int);
    virtual void Set2ndFactorAuthCode(char const*,bool);
    virtual void SetUserMachineName(char const*);
    virtual void GetUserMachineName(char *,int);
    virtual void GetEmailDomainFromLogonFailure(char *,int);
    virtual void GetDurationControl(void);
    virtual void GetDurationControlForApp(unsigned int);
    virtual void BSetDurationControlOnlineState(int);
    virtual void BSetDurationControlOnlineStateForApp(int,unsigned int);
    virtual void BIsSubscribedApp(unsigned int);
    virtual void GetSubscribedApps(unsigned int *,unsigned int,bool);
    virtual void RegisterActivationCode(char const*);
    virtual void AckSystemIM(unsigned long long);
    virtual void RequestSpecialSurvey(unsigned int);
    virtual void SendSpecialSurveyResponse(unsigned int,unsigned char const*,unsigned int);
    virtual void RequestNotifications(void);
    virtual void GetAppOwnershipInfo(unsigned int,unsigned int *,unsigned int *,char *);
    virtual void SendGameWebCallback(unsigned int,char const*);
    virtual void BIsStreamingUIToRemoteDevice(void);
    virtual void BIsCurrentlyNVStreaming(void);
    virtual void OnBigPictureForStreamingStartResult(bool,void *);
    virtual void OnBigPictureForStreamingDone(void);
    virtual void OnBigPictureForStreamingRestarting(void);
    virtual void StopStreaming(unsigned int);
    virtual void LockParentalLock(void);
    virtual void UnlockParentalLock(char const*);
    virtual void BIsParentalLockEnabled(void);
    virtual void BIsParentalLockLocked(void);
    virtual void BlockApp(unsigned int);
    virtual void UnblockApp(unsigned int);
    virtual void BIsAppBlocked(unsigned int);
    virtual void BIsAppInBlockList(unsigned int);
    virtual void BlockFeature(int);
    virtual void UnblockFeature(int);
    virtual void BIsFeatureBlocked(int);
    virtual void BIsFeatureInBlockList(int);
    virtual void GetParentalUnlockTime(void);
    virtual void BGetRecoveryEmail(char *,int);
    virtual void RequestParentalRecoveryEmail(void);
    virtual void BIsLockFromSiteLicense(void);
    virtual void BGetSerializedParentalSettings(int *);
    virtual void BSetParentalSettings(int *);
    virtual void BDisableParentalSettings(void);
    virtual void BGetParentalWebToken(int *,int *);
    virtual void GetCommunityPreference(int);
    virtual void SetCommunityPreference(int,bool);
    virtual void BCanLogonOfflineMode(void);
    virtual void LogOnOfflineMode(void);
    virtual void ValidateOfflineLogonTicket(char const*);
    virtual void BGetOfflineLogonTicket(char const*,int *);
    virtual void UploadLocalClientLogs(void);
    virtual void SetAsyncNotificationEnabled(unsigned int,bool);
    virtual void BIsOtherSessionPlaying(unsigned int *);
    virtual void BKickOtherPlayingSession(void);
    virtual void BIsAccountLockedDown(void);
    virtual void ClearAndSetAppTags(int,int const*);
    virtual void RemoveAppTag(int,char const*);
    virtual void AddAppTag(int,char const*);
    virtual void ClearAppTags(int);
    virtual void SetAppHidden(int,bool);
    virtual void RequestAccountLinkInfo(void);
    virtual void RequestSurveySchedule(void);
    virtual void RequestNewSteamAnnouncementState(void);
    virtual void UpdateSteamAnnouncementLastRead(unsigned long long,unsigned int);
    virtual void GetMarketEligibility(void);
    virtual void UpdateGameVrDllState(int,bool,bool);
    virtual void BIsAnyGameOrServiceAppRunning(void);
    virtual void BGetAppArrayMinutesPlayed(unsigned int *,int,int *,int *);
    virtual void BGetAppsLastPlayedTime(unsigned int *,int,unsigned int *);
    virtual void SendSteamServiceStatusUpdate(int,int);
    virtual void RequestSteamGroupChatMessageNotifications(unsigned long long,unsigned long long,int);
    virtual void RequestSteamGroupChatMessageHistory(unsigned long long,unsigned long long,unsigned int);
    virtual void RequestSendSteamGroupChatMessage(unsigned long long,unsigned long long,unsigned int,char const*);
    virtual void OnNewGroupChatMsgAdded(unsigned long long,unsigned long long,unsigned int,unsigned int,unsigned int,char const*);
    virtual void OnGroupChatUserStateChange(unsigned long long,unsigned int,int);
    virtual void OnReceivedGroupChatSubscriptionResponse(unsigned long long,unsigned long long,bool);
    virtual void GetTimedTrialStatus(unsigned int,unsigned int *,unsigned int *);
    virtual void RequestTimedTrialStatus(unsigned int);
};

struct SteamServersConnected_t
{
    enum { k_iCallback = k_iSteamUserCallbacks + 1 };
};

struct SteamServerConnectFailure_t
{
    enum { k_iCallback = k_iSteamUserCallbacks + 2 };
    int m_eResult;
    bool m_bStillRetrying;
};
