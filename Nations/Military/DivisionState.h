#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionState") {}
    public:
        float ManpowerCap(void* cfg) const { void* args[] = { cfg }; return CallValue<float>("ManpowerCap", args, 1); }
        float FullStrength(void* cfg) const { void* args[] = { cfg }; return CallValue<float>("FullStrength", args, 1); }
        float BaseSpeedMul(void* cfg) const { void* args[] = { cfg }; return CallValue<float>("BaseSpeedMul", args, 1); }
        float BaseAoiMul(void* cfg) const { void* args[] = { cfg }; return CallValue<float>("BaseAoiMul", args, 1); }
        float EffectiveSpeedMul(void* cfg) const { void* args[] = { cfg }; return CallValue<float>("EffectiveSpeedMul", args, 1); }
        float OwnSpeedMul(void* cfg) const { void* args[] = { cfg }; return CallValue<float>("OwnSpeedMul", args, 1); }
        void SnapRender() const { Call("SnapRender", nullptr, 0); }
        float RadiusFor(float manpower, int type, void* cfg) const { void* args[] = { &manpower, &type, cfg }; return CallStaticValue<float>("RadiusFor", args, 3); }
        float BodyFor(float manpower, int type, void* cfg) const { void* args[] = { &manpower, &type, cfg }; return CallStaticValue<float>("BodyFor", args, 3); }
        float RadiusFor(float manpower, void* e, void* cfg) const { void* args[] = { &manpower, &e, cfg }; return CallStaticValue<float>("RadiusFor", args, 3); }
        float BodyFor(float manpower, void* e, void* cfg) const { void* args[] = { &manpower, &e, cfg }; return CallStaticValue<float>("BodyFor", args, 3); }
        void RefreshBody(void* cfg) const { void* args[] = { cfg }; Call("RefreshBody", args, 1); }
        void InvalidateBodyCache() const { Call("InvalidateBodyCache", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        int tileIndex() const { return ReadField<int>("tileIndex"); }
        void SetTileIndex(int value) const { WriteField<int>("tileIndex", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void SetManpower(float value) const { WriteField<float>("manpower", value); }
        int stance() const { return ReadField<int>("stance"); }
        void SetStance(int value) const { WriteField<int>("stance", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        void* est() const { return ReadField<void*>("est"); }
        void SetEst(void* value) const { WriteField<void*>("est", value); }
        bool hasEst() const { return ReadField<bool>("hasEst"); }
        void SetHasEst(bool value) const { WriteField<bool>("hasEst", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        float groupBonus() const { return ReadField<float>("groupBonus"); }
        void SetGroupBonus(float value) const { WriteField<float>("groupBonus", value); }
        float groupSpeedMul() const { return ReadField<float>("groupSpeedMul"); }
        void SetGroupSpeedMul(float value) const { WriteField<float>("groupSpeedMul", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        float aoi() const { return ReadField<float>("aoi"); }
        void SetAoi(float value) const { WriteField<float>("aoi", value); }
        float body() const { return ReadField<float>("body"); }
        void SetBody(float value) const { WriteField<float>("body", value); }
        float crowd() const { return ReadField<float>("crowd"); }
        void SetCrowd(float value) const { WriteField<float>("crowd", value); }
        void* crowdPush() const { return ReadField<void*>("crowdPush"); }
        void SetCrowdPush(void* value) const { WriteField<void*>("crowdPush", value); }
        bool engaged() const { return ReadField<bool>("engaged"); }
        void SetEngaged(bool value) const { WriteField<bool>("engaged", value); }
        void* engagedEnemyPos() const { return ReadField<void*>("engagedEnemyPos"); }
        void SetEngagedEnemyPos(void* value) const { WriteField<void*>("engagedEnemyPos", value); }
        int engagedEnemyId() const { return ReadField<int>("engagedEnemyId"); }
        void SetEngagedEnemyId(int value) const { WriteField<int>("engagedEnemyId", value); }
        float engagedHoldDist() const { return ReadField<float>("engagedHoldDist"); }
        void SetEngagedHoldDist(float value) const { WriteField<float>("engagedHoldDist", value); }
        void* target() const { return ReadField<void*>("target"); }
        void SetTarget(void* value) const { WriteField<void*>("target", value); }
        bool hasTarget() const { return ReadField<bool>("hasTarget"); }
        void SetHasTarget(bool value) const { WriteField<bool>("hasTarget", value); }
        bool isReserve() const { return ReadField<bool>("isReserve"); }
        void SetIsReserve(bool value) const { WriteField<bool>("isReserve", value); }
        int advanceSince() const { return ReadField<int>("advanceSince"); }
        void SetAdvanceSince(int value) const { WriteField<int>("advanceSince", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void SetManualControl(bool value) const { WriteField<bool>("manualControl", value); }
        int armyId() const { return ReadField<int>("armyId"); }
        void SetArmyId(int value) const { WriteField<int>("armyId", value); }
        int battleId() const { return ReadField<int>("battleId"); }
        void SetBattleId(int value) const { WriteField<int>("battleId", value); }
        int navalPhase() const { return ReadField<int>("navalPhase"); }
        void SetNavalPhase(int value) const { WriteField<int>("navalPhase", value); }
        int navalVesselId() const { return ReadField<int>("navalVesselId"); }
        void SetNavalVesselId(int value) const { WriteField<int>("navalVesselId", value); }
        int navalPhaseEndTick() const { return ReadField<int>("navalPhaseEndTick"); }
        void SetNavalPhaseEndTick(int value) const { WriteField<int>("navalPhaseEndTick", value); }
        int navalPhaseStartTick() const { return ReadField<int>("navalPhaseStartTick"); }
        void SetNavalPhaseStartTick(int value) const { WriteField<int>("navalPhaseStartTick", value); }
        void* navalGoal() const { return ReadField<void*>("navalGoal"); }
        void SetNavalGoal(void* value) const { WriteField<void*>("navalGoal", value); }
        int navalEmbarkTile() const { return ReadField<int>("navalEmbarkTile"); }
        void SetNavalEmbarkTile(int value) const { WriteField<int>("navalEmbarkTile", value); }
        int navalLandTile() const { return ReadField<int>("navalLandTile"); }
        void SetNavalLandTile(int value) const { WriteField<int>("navalLandTile", value); }
        int navalLanding() const { return ReadField<int>("navalLanding"); }
        void SetNavalLanding(int value) const { WriteField<int>("navalLanding", value); }
        int navalTargetNation() const { return ReadField<int>("navalTargetNation"); }
        void SetNavalTargetNation(int value) const { WriteField<int>("navalTargetNation", value); }
        bool navalReturning() const { return ReadField<bool>("navalReturning"); }
        void SetNavalReturning(bool value) const { WriteField<bool>("navalReturning", value); }
        bool navalLandIsPort() const { return ReadField<bool>("navalLandIsPort"); }
        void SetNavalLandIsPort(bool value) const { WriteField<bool>("navalLandIsPort", value); }
        float navalBleed() const { return ReadField<float>("navalBleed"); }
        void SetNavalBleed(float value) const { WriteField<float>("navalBleed", value); }
        int navalContactTick() const { return ReadField<int>("navalContactTick"); }
        void SetNavalContactTick(int value) const { WriteField<int>("navalContactTick", value); }
        float navalSupportMul() const { return ReadField<float>("navalSupportMul"); }
        void SetNavalSupportMul(float value) const { WriteField<float>("navalSupportMul", value); }
        int navalSupportTick() const { return ReadField<int>("navalSupportTick"); }
        void SetNavalSupportTick(int value) const { WriteField<int>("navalSupportTick", value); }
        int navalTaskId() const { return ReadField<int>("navalTaskId"); }
        void SetNavalTaskId(int value) const { WriteField<int>("navalTaskId", value); }
        bool holdGround() const { return ReadField<bool>("holdGround"); }
        void SetHoldGround(bool value) const { WriteField<bool>("holdGround", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void SetStats(void* value) const { WriteField<void*>("stats", value); }
        float statScore() const { return ReadField<float>("statScore"); }
        void SetStatScore(float value) const { WriteField<float>("statScore", value); }
        bool attackOrder() const { return ReadField<bool>("attackOrder"); }
        void SetAttackOrder(bool value) const { WriteField<bool>("attackOrder", value); }
        bool attackHard() const { return ReadField<bool>("attackHard"); }
        void SetAttackHard(bool value) const { WriteField<bool>("attackHard", value); }
        bool attackExhausted() const { return ReadField<bool>("attackExhausted"); }
        void SetAttackExhausted(bool value) const { WriteField<bool>("attackExhausted", value); }
        bool weighedAttacks() const { return ReadField<bool>("weighedAttacks"); }
        void SetWeighedAttacks(bool value) const { WriteField<bool>("weighedAttacks", value); }
        float attackBar() const { return ReadField<float>("attackBar"); }
        void SetAttackBar(float value) const { WriteField<float>("attackBar", value); }
        int fightRole() const { return ReadField<int>("fightRole"); }
        void SetFightRole(int value) const { WriteField<int>("fightRole", value); }
        int fightBattleId() const { return ReadField<int>("fightBattleId"); }
        void SetFightBattleId(int value) const { WriteField<int>("fightBattleId", value); }
        int fightTargetId() const { return ReadField<int>("fightTargetId"); }
        void SetFightTargetId(int value) const { WriteField<int>("fightTargetId", value); }
        int fightCounterId() const { return ReadField<int>("fightCounterId"); }
        void SetFightCounterId(int value) const { WriteField<int>("fightCounterId", value); }
        float fightOrgDmg() const { return ReadField<float>("fightOrgDmg"); }
        void SetFightOrgDmg(float value) const { WriteField<float>("fightOrgDmg", value); }
        float fightStrDmg() const { return ReadField<float>("fightStrDmg"); }
        void SetFightStrDmg(float value) const { WriteField<float>("fightStrDmg", value); }
        bool fightFront() const { return ReadField<bool>("fightFront"); }
        void SetFightFront(bool value) const { WriteField<bool>("fightFront", value); }
        bool fightCounterFront() const { return ReadField<bool>("fightCounterFront"); }
        void SetFightCounterFront(bool value) const { WriteField<bool>("fightCounterFront", value); }
        int templateId() const { return ReadField<int>("templateId"); }
        void SetTemplateId(int value) const { WriteField<int>("templateId", value); }
        float kitFirearm() const { return ReadField<float>("kitFirearm"); }
        void SetKitFirearm(float value) const { WriteField<float>("kitFirearm", value); }
        float kitMelee() const { return ReadField<float>("kitMelee"); }
        void SetKitMelee(float value) const { WriteField<float>("kitMelee", value); }
        float kitArmour() const { return ReadField<float>("kitArmour"); }
        void SetKitArmour(float value) const { WriteField<float>("kitArmour", value); }
        float kitArmourKg() const { return ReadField<float>("kitArmourKg"); }
        void SetKitArmourKg(float value) const { WriteField<float>("kitArmourKg", value); }
        float kitVehicleAtk() const { return ReadField<float>("kitVehicleAtk"); }
        void SetKitVehicleAtk(float value) const { WriteField<float>("kitVehicleAtk", value); }
        float kitVehicleDef() const { return ReadField<float>("kitVehicleDef"); }
        void SetKitVehicleDef(float value) const { WriteField<float>("kitVehicleDef", value); }
        float kitVehicleSpd() const { return ReadField<float>("kitVehicleSpd"); }
        void SetKitVehicleSpd(float value) const { WriteField<float>("kitVehicleSpd", value); }
        float kitArtillery() const { return ReadField<float>("kitArtillery"); }
        void SetKitArtillery(float value) const { WriteField<float>("kitArtillery", value); }
        float attackMul() const { return ReadField<float>("attackMul"); }
        void SetAttackMul(float value) const { WriteField<float>("attackMul", value); }
        float damageTakenMul() const { return ReadField<float>("damageTakenMul"); }
        void SetDamageTakenMul(float value) const { WriteField<float>("damageTakenMul", value); }
        float kitSpeedMul() const { return ReadField<float>("kitSpeedMul"); }
        void SetKitSpeedMul(float value) const { WriteField<float>("kitSpeedMul", value); }
        int kitVersion() const { return ReadField<int>("kitVersion"); }
        void SetKitVersion(int value) const { WriteField<int>("kitVersion", value); }
        bool kitArmed() const { return ReadField<bool>("kitArmed"); }
        void SetKitArmed(bool value) const { WriteField<bool>("kitArmed", value); }
        int templateRevision() const { return ReadField<int>("templateRevision"); }
        void SetTemplateRevision(int value) const { WriteField<int>("templateRevision", value); }
        void* kitNames() const { return ReadField<void*>("kitNames"); }
        void SetKitNames(void* value) const { WriteField<void*>("kitNames", value); }
        void* kitMakers() const { return ReadField<void*>("kitMakers"); }
        void SetKitMakers(void* value) const { WriteField<void*>("kitMakers", value); }
        void* kitDesignIds() const { return ReadField<void*>("kitDesignIds"); }
        void SetKitDesignIds(void* value) const { WriteField<void*>("kitDesignIds", value); }
        void* moveHeading() const { return ReadField<void*>("moveHeading"); }
        void SetMoveHeading(void* value) const { WriteField<void*>("moveHeading", value); }
        bool hasMoveHeading() const { return ReadField<bool>("hasMoveHeading"); }
        void SetHasMoveHeading(bool value) const { WriteField<bool>("hasMoveHeading", value); }
        void* renderPos() const { return ReadField<void*>("renderPos"); }
        void SetRenderPos(void* value) const { WriteField<void*>("renderPos", value); }
        void* renderVel() const { return ReadField<void*>("renderVel"); }
        void SetRenderVel(void* value) const { WriteField<void*>("renderVel", value); }
        bool renderInit() const { return ReadField<bool>("renderInit"); }
        void SetRenderInit(bool value) const { WriteField<bool>("renderInit", value); }
        int fxPrevStance() const { return ReadField<int>("fxPrevStance"); }
        void SetFxPrevStance(int value) const { WriteField<int>("fxPrevStance", value); }
        float fxRecentDamage() const { return ReadField<float>("fxRecentDamage"); }
        void SetFxRecentDamage(float value) const { WriteField<float>("fxRecentDamage", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void SetFacing(void* value) const { WriteField<void*>("facing", value); }
        bool hasFacing() const { return ReadField<bool>("hasFacing"); }
        void SetHasFacing(bool value) const { WriteField<bool>("hasFacing", value); }
        bool pocketed() const { return ReadField<bool>("pocketed"); }
        void SetPocketed(bool value) const { WriteField<bool>("pocketed", value); }
        int encircledSinceTick() const { return ReadField<int>("encircledSinceTick"); }
        void SetEncircledSinceTick(int value) const { WriteField<int>("encircledSinceTick", value); }
        int pocketId() const { return ReadField<int>("pocketId"); }
        void SetPocketId(int value) const { WriteField<int>("pocketId", value); }
        int originNationId() const { return ReadField<int>("originNationId"); }
        void SetOriginNationId(int value) const { WriteField<int>("originNationId", value); }
        int incursionIn() const { return ReadField<int>("incursionIn"); }
        void SetIncursionIn(int value) const { WriteField<int>("incursionIn", value); }
        bool incursionAbroad() const { return ReadField<bool>("incursionAbroad"); }
        void SetIncursionAbroad(bool value) const { WriteField<bool>("incursionAbroad", value); }
        float incursionDepth() const { return ReadField<float>("incursionDepth"); }
        void SetIncursionDepth(float value) const { WriteField<float>("incursionDepth", value); }
        int incursionAnchor() const { return ReadField<int>("incursionAnchor"); }
        void SetIncursionAnchor(int value) const { WriteField<int>("incursionAnchor", value); }
        bool skirmishing() const { return ReadField<bool>("skirmishing"); }
        void SetSkirmishing(bool value) const { WriteField<bool>("skirmishing", value); }
        int incursionStance() const { return ReadField<int>("incursionStance"); }
        void SetIncursionStance(int value) const { WriteField<int>("incursionStance", value); }
        int supplyComp() const { return ReadField<int>("supplyComp"); }
        void SetSupplyComp(int value) const { WriteField<int>("supplyComp", value); }
        int lastCombatTick() const { return ReadField<int>("lastCombatTick"); }
        void SetLastCombatTick(int value) const { WriteField<int>("lastCombatTick", value); }
        int combatStartTick() const { return ReadField<int>("combatStartTick"); }
        void SetCombatStartTick(int value) const { WriteField<int>("combatStartTick", value); }
        int lastMovedTick() const { return ReadField<int>("lastMovedTick"); }
        void SetLastMovedTick(int value) const { WriteField<int>("lastMovedTick", value); }
        int raisedTick() const { return ReadField<int>("raisedTick"); }
        void SetRaisedTick(int value) const { WriteField<int>("raisedTick", value); }
        int homeStateId() const { return ReadField<int>("homeStateId"); }
        void SetHomeStateId(int value) const { WriteField<int>("homeStateId", value); }
        bool standingPin() const { return ReadField<bool>("standingPin"); }
        void SetStandingPin(bool value) const { WriteField<bool>("standingPin", value); }
        float youth() const { return ReadField<float>("youth"); }
        void SetYouth(float value) const { WriteField<float>("youth", value); }
        int youthGrownTick() const { return ReadField<int>("youthGrownTick"); }
        void SetYouthGrownTick(int value) const { WriteField<int>("youthGrownTick", value); }
        bool standing() const { return ReadField<bool>("standing"); }
        void SetStanding(bool value) const { WriteField<bool>("standing", value); }
        bool startingKit() const { return ReadField<bool>("startingKit"); }
        void SetStartingKit(bool value) const { WriteField<bool>("startingKit", value); }
        float orgCapMul() const { return ReadField<float>("orgCapMul"); }
        void SetOrgCapMul(float value) const { WriteField<float>("orgCapMul", value); }
        int lastWithdrawTick() const { return ReadField<int>("lastWithdrawTick"); }
        void SetLastWithdrawTick(int value) const { WriteField<int>("lastWithdrawTick", value); }
        int fallbackStartTick() const { return ReadField<int>("fallbackStartTick"); }
        void SetFallbackStartTick(int value) const { WriteField<int>("fallbackStartTick", value); }
        void* resumeTarget() const { return ReadField<void*>("resumeTarget"); }
        void SetResumeTarget(void* value) const { WriteField<void*>("resumeTarget", value); }
        bool hasResumeTarget() const { return ReadField<bool>("hasResumeTarget"); }
        void SetHasResumeTarget(bool value) const { WriteField<bool>("hasResumeTarget", value); }
        void* lastThreatPos() const { return ReadField<void*>("lastThreatPos"); }
        void SetLastThreatPos(void* value) const { WriteField<void*>("lastThreatPos", value); }
        int lastThreatTick() const { return ReadField<int>("lastThreatTick"); }
        void SetLastThreatTick(int value) const { WriteField<int>("lastThreatTick", value); }
        int8_t navSide() const { return ReadField<int8_t>("navSide"); }
        void SetNavSide(int8_t value) const { WriteField<int8_t>("navSide", value); }
        void* navHeading() const { return ReadField<void*>("navHeading"); }
        void SetNavHeading(void* value) const { WriteField<void*>("navHeading", value); }
        float navLeaveDistSq() const { return ReadField<float>("navLeaveDistSq"); }
        void SetNavLeaveDistSq(float value) const { WriteField<float>("navLeaveDistSq", value); }
        void* navTarget() const { return ReadField<void*>("navTarget"); }
        void SetNavTarget(void* value) const { WriteField<void*>("navTarget", value); }
        bool navCrowdFollow() const { return ReadField<bool>("navCrowdFollow"); }
        void SetNavCrowdFollow(bool value) const { WriteField<bool>("navCrowdFollow", value); }
        int navFollowTicks() const { return ReadField<int>("navFollowTicks"); }
        void SetNavFollowTicks(int value) const { WriteField<int>("navFollowTicks", value); }
        void* pathPoints() const { return ReadField<void*>("pathPoints"); }
        void SetPathPoints(void* value) const { WriteField<void*>("pathPoints", value); }
        int pathCount() const { return ReadField<int>("pathCount"); }
        void SetPathCount(int value) const { WriteField<int>("pathCount", value); }
        int pathCursor() const { return ReadField<int>("pathCursor"); }
        void SetPathCursor(int value) const { WriteField<int>("pathCursor", value); }
        void* pathGoal() const { return ReadField<void*>("pathGoal"); }
        void SetPathGoal(void* value) const { WriteField<void*>("pathGoal", value); }
        bool pathPending() const { return ReadField<bool>("pathPending"); }
        void SetPathPending(bool value) const { WriteField<bool>("pathPending", value); }
        bool pathTruncated() const { return ReadField<bool>("pathTruncated"); }
        void SetPathTruncated(bool value) const { WriteField<bool>("pathTruncated", value); }
        void* pathLegFrom() const { return ReadField<void*>("pathLegFrom"); }
        void SetPathLegFrom(void* value) const { WriteField<void*>("pathLegFrom", value); }
        bool pathPress() const { return ReadField<bool>("pathPress"); }
        void SetPathPress(bool value) const { WriteField<bool>("pathPress", value); }
        bool navPressHold() const { return ReadField<bool>("navPressHold"); }
        void SetNavPressHold(bool value) const { WriteField<bool>("navPressHold", value); }
        int pathFailUntilTick() const { return ReadField<int>("pathFailUntilTick"); }
        void SetPathFailUntilTick(int value) const { WriteField<int>("pathFailUntilTick", value); }
        void* mv() const { return ReadField<void*>("mv"); }
        void SetMv(void* value) const { WriteField<void*>("mv", value); }
        int moveHoldUntilTick() const { return ReadField<int>("moveHoldUntilTick"); }
        void SetMoveHoldUntilTick(int value) const { WriteField<int>("moveHoldUntilTick", value); }
        int navStallCheckTick() const { return ReadField<int>("navStallCheckTick"); }
        void SetNavStallCheckTick(int value) const { WriteField<int>("navStallCheckTick", value); }
        void* navStallCheckPos() const { return ReadField<void*>("navStallCheckPos"); }
        void SetNavStallCheckPos(void* value) const { WriteField<void*>("navStallCheckPos", value); }
        int8_t navStallStrikes() const { return ReadField<int8_t>("navStallStrikes"); }
        void SetNavStallStrikes(int8_t value) const { WriteField<int8_t>("navStallStrikes", value); }
        void* blockedTarget() const { return ReadField<void*>("blockedTarget"); }
        void SetBlockedTarget(void* value) const { WriteField<void*>("blockedTarget", value); }
        int blockedUntilTick() const { return ReadField<int>("blockedUntilTick"); }
        void SetBlockedUntilTick(int value) const { WriteField<int>("blockedUntilTick", value); }
        int lastEnemyId() const { return ReadField<int>("lastEnemyId"); }
        void SetLastEnemyId(int value) const { WriteField<int>("lastEnemyId", value); }
        float recentBleed() const { return ReadField<float>("recentBleed"); }
        void SetRecentBleed(float value) const { WriteField<float>("recentBleed", value); }
        float supply() const { return ReadField<float>("supply"); }
        void SetSupply(float value) const { WriteField<float>("supply", value); }
        void* logistics() const { return ReadField<void*>("logistics"); }
        void SetLogistics(void* value) const { WriteField<void*>("logistics", value); }
        float spawnTime() const { return ReadField<float>("spawnTime"); }
        void SetSpawnTime(float value) const { WriteField<float>("spawnTime", value); }
    };
}
