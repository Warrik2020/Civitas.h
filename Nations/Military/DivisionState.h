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
        float ManpowerCap(void* cfg) const { void* __callArgs[] = { cfg }; return CallValue<float>("ManpowerCap", __callArgs, 1); }
        float FullStrength(void* cfg) const { void* __callArgs[] = { cfg }; return CallValue<float>("FullStrength", __callArgs, 1); }
        float BaseSpeedMul(void* cfg) const { void* __callArgs[] = { cfg }; return CallValue<float>("BaseSpeedMul", __callArgs, 1); }
        float BaseAoiMul(void* cfg) const { void* __callArgs[] = { cfg }; return CallValue<float>("BaseAoiMul", __callArgs, 1); }
        float EffectiveSpeedMul(void* cfg) const { void* __callArgs[] = { cfg }; return CallValue<float>("EffectiveSpeedMul", __callArgs, 1); }
        float OwnSpeedMul(void* cfg) const { void* __callArgs[] = { cfg }; return CallValue<float>("OwnSpeedMul", __callArgs, 1); }
        void SnapRender() const { Call("SnapRender", nullptr, 0); }
        float RadiusFor(float manpower, int type, void* cfg) const { void* __callArgs[] = { &manpower, &type, cfg }; return CallStaticValue<float>("RadiusFor", __callArgs, 3); }
        float BodyFor(float manpower, int type, void* cfg) const { void* __callArgs[] = { &manpower, &type, cfg }; return CallStaticValue<float>("BodyFor", __callArgs, 3); }
        float RadiusFor(float manpower, void* e, void* cfg) const { void* __callArgs[] = { &manpower, &e, cfg }; return CallStaticValue<float>("RadiusFor", __callArgs, 3); }
        float BodyFor(float manpower, void* e, void* cfg) const { void* __callArgs[] = { &manpower, &e, cfg }; return CallStaticValue<float>("BodyFor", __callArgs, 3); }
        void RefreshBody(void* cfg) const { void* __callArgs[] = { cfg }; Call("RefreshBody", __callArgs, 1); }
        void InvalidateBodyCache() const { Call("InvalidateBodyCache", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void ordinal(int value) const { WriteField<int>("ordinal", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        int tileIndex() const { return ReadField<int>("tileIndex"); }
        void tileIndex(int value) const { WriteField<int>("tileIndex", value); }
        float org() const { return ReadField<float>("org"); }
        void org(float value) const { WriteField<float>("org", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void manpower(float value) const { WriteField<float>("manpower", value); }
        int stance() const { return ReadField<int>("stance"); }
        void stance(int value) const { WriteField<int>("stance", value); }
        int type() const { return ReadField<int>("type"); }
        void type(int value) const { WriteField<int>("type", value); }
        void* est() const { return ReadField<void*>("est"); }
        void est(void* value) const { WriteField<void*>("est", value); }
        bool hasEst() const { return ReadField<bool>("hasEst"); }
        void hasEst(bool value) const { WriteField<bool>("hasEst", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void groupId(int value) const { WriteField<int>("groupId", value); }
        float groupBonus() const { return ReadField<float>("groupBonus"); }
        void groupBonus(float value) const { WriteField<float>("groupBonus", value); }
        float groupSpeedMul() const { return ReadField<float>("groupSpeedMul"); }
        void groupSpeedMul(float value) const { WriteField<float>("groupSpeedMul", value); }
        float radius() const { return ReadField<float>("radius"); }
        void radius(float value) const { WriteField<float>("radius", value); }
        float aoi() const { return ReadField<float>("aoi"); }
        void aoi(float value) const { WriteField<float>("aoi", value); }
        float body() const { return ReadField<float>("body"); }
        void body(float value) const { WriteField<float>("body", value); }
        float crowd() const { return ReadField<float>("crowd"); }
        void crowd(float value) const { WriteField<float>("crowd", value); }
        void* crowdPush() const { return ReadField<void*>("crowdPush"); }
        void crowdPush(void* value) const { WriteField<void*>("crowdPush", value); }
        bool engaged() const { return ReadField<bool>("engaged"); }
        void engaged(bool value) const { WriteField<bool>("engaged", value); }
        void* engagedEnemyPos() const { return ReadField<void*>("engagedEnemyPos"); }
        void engagedEnemyPos(void* value) const { WriteField<void*>("engagedEnemyPos", value); }
        int engagedEnemyId() const { return ReadField<int>("engagedEnemyId"); }
        void engagedEnemyId(int value) const { WriteField<int>("engagedEnemyId", value); }
        float engagedHoldDist() const { return ReadField<float>("engagedHoldDist"); }
        void engagedHoldDist(float value) const { WriteField<float>("engagedHoldDist", value); }
        void* target() const { return ReadField<void*>("target"); }
        void target(void* value) const { WriteField<void*>("target", value); }
        bool hasTarget() const { return ReadField<bool>("hasTarget"); }
        void hasTarget(bool value) const { WriteField<bool>("hasTarget", value); }
        bool isReserve() const { return ReadField<bool>("isReserve"); }
        void isReserve(bool value) const { WriteField<bool>("isReserve", value); }
        int advanceSince() const { return ReadField<int>("advanceSince"); }
        void advanceSince(int value) const { WriteField<int>("advanceSince", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void manualControl(bool value) const { WriteField<bool>("manualControl", value); }
        int armyId() const { return ReadField<int>("armyId"); }
        void armyId(int value) const { WriteField<int>("armyId", value); }
        int battleId() const { return ReadField<int>("battleId"); }
        void battleId(int value) const { WriteField<int>("battleId", value); }
        int navalPhase() const { return ReadField<int>("navalPhase"); }
        void navalPhase(int value) const { WriteField<int>("navalPhase", value); }
        int navalVesselId() const { return ReadField<int>("navalVesselId"); }
        void navalVesselId(int value) const { WriteField<int>("navalVesselId", value); }
        int navalPhaseEndTick() const { return ReadField<int>("navalPhaseEndTick"); }
        void navalPhaseEndTick(int value) const { WriteField<int>("navalPhaseEndTick", value); }
        int navalPhaseStartTick() const { return ReadField<int>("navalPhaseStartTick"); }
        void navalPhaseStartTick(int value) const { WriteField<int>("navalPhaseStartTick", value); }
        void* navalGoal() const { return ReadField<void*>("navalGoal"); }
        void navalGoal(void* value) const { WriteField<void*>("navalGoal", value); }
        int navalEmbarkTile() const { return ReadField<int>("navalEmbarkTile"); }
        void navalEmbarkTile(int value) const { WriteField<int>("navalEmbarkTile", value); }
        int navalLandTile() const { return ReadField<int>("navalLandTile"); }
        void navalLandTile(int value) const { WriteField<int>("navalLandTile", value); }
        int navalLanding() const { return ReadField<int>("navalLanding"); }
        void navalLanding(int value) const { WriteField<int>("navalLanding", value); }
        int navalTargetNation() const { return ReadField<int>("navalTargetNation"); }
        void navalTargetNation(int value) const { WriteField<int>("navalTargetNation", value); }
        bool navalReturning() const { return ReadField<bool>("navalReturning"); }
        void navalReturning(bool value) const { WriteField<bool>("navalReturning", value); }
        bool navalLandIsPort() const { return ReadField<bool>("navalLandIsPort"); }
        void navalLandIsPort(bool value) const { WriteField<bool>("navalLandIsPort", value); }
        float navalBleed() const { return ReadField<float>("navalBleed"); }
        void navalBleed(float value) const { WriteField<float>("navalBleed", value); }
        int navalContactTick() const { return ReadField<int>("navalContactTick"); }
        void navalContactTick(int value) const { WriteField<int>("navalContactTick", value); }
        float navalSupportMul() const { return ReadField<float>("navalSupportMul"); }
        void navalSupportMul(float value) const { WriteField<float>("navalSupportMul", value); }
        int navalSupportTick() const { return ReadField<int>("navalSupportTick"); }
        void navalSupportTick(int value) const { WriteField<int>("navalSupportTick", value); }
        int navalTaskId() const { return ReadField<int>("navalTaskId"); }
        void navalTaskId(int value) const { WriteField<int>("navalTaskId", value); }
        bool holdGround() const { return ReadField<bool>("holdGround"); }
        void holdGround(bool value) const { WriteField<bool>("holdGround", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void stats(void* value) const { WriteField<void*>("stats", value); }
        float statScore() const { return ReadField<float>("statScore"); }
        void statScore(float value) const { WriteField<float>("statScore", value); }
        bool attackOrder() const { return ReadField<bool>("attackOrder"); }
        void attackOrder(bool value) const { WriteField<bool>("attackOrder", value); }
        bool attackHard() const { return ReadField<bool>("attackHard"); }
        void attackHard(bool value) const { WriteField<bool>("attackHard", value); }
        bool attackExhausted() const { return ReadField<bool>("attackExhausted"); }
        void attackExhausted(bool value) const { WriteField<bool>("attackExhausted", value); }
        bool weighedAttacks() const { return ReadField<bool>("weighedAttacks"); }
        void weighedAttacks(bool value) const { WriteField<bool>("weighedAttacks", value); }
        float attackBar() const { return ReadField<float>("attackBar"); }
        void attackBar(float value) const { WriteField<float>("attackBar", value); }
        int fightRole() const { return ReadField<int>("fightRole"); }
        void fightRole(int value) const { WriteField<int>("fightRole", value); }
        int fightBattleId() const { return ReadField<int>("fightBattleId"); }
        void fightBattleId(int value) const { WriteField<int>("fightBattleId", value); }
        int fightTargetId() const { return ReadField<int>("fightTargetId"); }
        void fightTargetId(int value) const { WriteField<int>("fightTargetId", value); }
        int fightCounterId() const { return ReadField<int>("fightCounterId"); }
        void fightCounterId(int value) const { WriteField<int>("fightCounterId", value); }
        float fightOrgDmg() const { return ReadField<float>("fightOrgDmg"); }
        void fightOrgDmg(float value) const { WriteField<float>("fightOrgDmg", value); }
        float fightStrDmg() const { return ReadField<float>("fightStrDmg"); }
        void fightStrDmg(float value) const { WriteField<float>("fightStrDmg", value); }
        bool fightFront() const { return ReadField<bool>("fightFront"); }
        void fightFront(bool value) const { WriteField<bool>("fightFront", value); }
        bool fightCounterFront() const { return ReadField<bool>("fightCounterFront"); }
        void fightCounterFront(bool value) const { WriteField<bool>("fightCounterFront", value); }
        int templateId() const { return ReadField<int>("templateId"); }
        void templateId(int value) const { WriteField<int>("templateId", value); }
        float kitFirearm() const { return ReadField<float>("kitFirearm"); }
        void kitFirearm(float value) const { WriteField<float>("kitFirearm", value); }
        float kitMelee() const { return ReadField<float>("kitMelee"); }
        void kitMelee(float value) const { WriteField<float>("kitMelee", value); }
        float kitArmour() const { return ReadField<float>("kitArmour"); }
        void kitArmour(float value) const { WriteField<float>("kitArmour", value); }
        float kitArmourKg() const { return ReadField<float>("kitArmourKg"); }
        void kitArmourKg(float value) const { WriteField<float>("kitArmourKg", value); }
        float kitVehicleAtk() const { return ReadField<float>("kitVehicleAtk"); }
        void kitVehicleAtk(float value) const { WriteField<float>("kitVehicleAtk", value); }
        float kitVehicleDef() const { return ReadField<float>("kitVehicleDef"); }
        void kitVehicleDef(float value) const { WriteField<float>("kitVehicleDef", value); }
        float kitVehicleSpd() const { return ReadField<float>("kitVehicleSpd"); }
        void kitVehicleSpd(float value) const { WriteField<float>("kitVehicleSpd", value); }
        float kitArtillery() const { return ReadField<float>("kitArtillery"); }
        void kitArtillery(float value) const { WriteField<float>("kitArtillery", value); }
        float attackMul() const { return ReadField<float>("attackMul"); }
        void attackMul(float value) const { WriteField<float>("attackMul", value); }
        float damageTakenMul() const { return ReadField<float>("damageTakenMul"); }
        void damageTakenMul(float value) const { WriteField<float>("damageTakenMul", value); }
        float kitSpeedMul() const { return ReadField<float>("kitSpeedMul"); }
        void kitSpeedMul(float value) const { WriteField<float>("kitSpeedMul", value); }
        int kitVersion() const { return ReadField<int>("kitVersion"); }
        void kitVersion(int value) const { WriteField<int>("kitVersion", value); }
        bool kitArmed() const { return ReadField<bool>("kitArmed"); }
        void kitArmed(bool value) const { WriteField<bool>("kitArmed", value); }
        int templateRevision() const { return ReadField<int>("templateRevision"); }
        void templateRevision(int value) const { WriteField<int>("templateRevision", value); }
        void* kitNames() const { return ReadField<void*>("kitNames"); }
        void kitNames(void* value) const { WriteField<void*>("kitNames", value); }
        void* kitMakers() const { return ReadField<void*>("kitMakers"); }
        void kitMakers(void* value) const { WriteField<void*>("kitMakers", value); }
        void* kitDesignIds() const { return ReadField<void*>("kitDesignIds"); }
        void kitDesignIds(void* value) const { WriteField<void*>("kitDesignIds", value); }
        void* moveHeading() const { return ReadField<void*>("moveHeading"); }
        void moveHeading(void* value) const { WriteField<void*>("moveHeading", value); }
        bool hasMoveHeading() const { return ReadField<bool>("hasMoveHeading"); }
        void hasMoveHeading(bool value) const { WriteField<bool>("hasMoveHeading", value); }
        void* renderPos() const { return ReadField<void*>("renderPos"); }
        void renderPos(void* value) const { WriteField<void*>("renderPos", value); }
        void* renderVel() const { return ReadField<void*>("renderVel"); }
        void renderVel(void* value) const { WriteField<void*>("renderVel", value); }
        bool renderInit() const { return ReadField<bool>("renderInit"); }
        void renderInit(bool value) const { WriteField<bool>("renderInit", value); }
        int fxPrevStance() const { return ReadField<int>("fxPrevStance"); }
        void fxPrevStance(int value) const { WriteField<int>("fxPrevStance", value); }
        float fxRecentDamage() const { return ReadField<float>("fxRecentDamage"); }
        void fxRecentDamage(float value) const { WriteField<float>("fxRecentDamage", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void facing(void* value) const { WriteField<void*>("facing", value); }
        bool hasFacing() const { return ReadField<bool>("hasFacing"); }
        void hasFacing(bool value) const { WriteField<bool>("hasFacing", value); }
        bool pocketed() const { return ReadField<bool>("pocketed"); }
        void pocketed(bool value) const { WriteField<bool>("pocketed", value); }
        int encircledSinceTick() const { return ReadField<int>("encircledSinceTick"); }
        void encircledSinceTick(int value) const { WriteField<int>("encircledSinceTick", value); }
        int pocketId() const { return ReadField<int>("pocketId"); }
        void pocketId(int value) const { WriteField<int>("pocketId", value); }
        int originNationId() const { return ReadField<int>("originNationId"); }
        void originNationId(int value) const { WriteField<int>("originNationId", value); }
        int incursionIn() const { return ReadField<int>("incursionIn"); }
        void incursionIn(int value) const { WriteField<int>("incursionIn", value); }
        bool incursionAbroad() const { return ReadField<bool>("incursionAbroad"); }
        void incursionAbroad(bool value) const { WriteField<bool>("incursionAbroad", value); }
        float incursionDepth() const { return ReadField<float>("incursionDepth"); }
        void incursionDepth(float value) const { WriteField<float>("incursionDepth", value); }
        int incursionAnchor() const { return ReadField<int>("incursionAnchor"); }
        void incursionAnchor(int value) const { WriteField<int>("incursionAnchor", value); }
        bool skirmishing() const { return ReadField<bool>("skirmishing"); }
        void skirmishing(bool value) const { WriteField<bool>("skirmishing", value); }
        int incursionStance() const { return ReadField<int>("incursionStance"); }
        void incursionStance(int value) const { WriteField<int>("incursionStance", value); }
        int supplyComp() const { return ReadField<int>("supplyComp"); }
        void supplyComp(int value) const { WriteField<int>("supplyComp", value); }
        int lastCombatTick() const { return ReadField<int>("lastCombatTick"); }
        void lastCombatTick(int value) const { WriteField<int>("lastCombatTick", value); }
        int combatStartTick() const { return ReadField<int>("combatStartTick"); }
        void combatStartTick(int value) const { WriteField<int>("combatStartTick", value); }
        int lastMovedTick() const { return ReadField<int>("lastMovedTick"); }
        void lastMovedTick(int value) const { WriteField<int>("lastMovedTick", value); }
        int raisedTick() const { return ReadField<int>("raisedTick"); }
        void raisedTick(int value) const { WriteField<int>("raisedTick", value); }
        int homeStateId() const { return ReadField<int>("homeStateId"); }
        void homeStateId(int value) const { WriteField<int>("homeStateId", value); }
        bool standingPin() const { return ReadField<bool>("standingPin"); }
        void standingPin(bool value) const { WriteField<bool>("standingPin", value); }
        float youth() const { return ReadField<float>("youth"); }
        void youth(float value) const { WriteField<float>("youth", value); }
        int youthGrownTick() const { return ReadField<int>("youthGrownTick"); }
        void youthGrownTick(int value) const { WriteField<int>("youthGrownTick", value); }
        bool standing() const { return ReadField<bool>("standing"); }
        void standing(bool value) const { WriteField<bool>("standing", value); }
        bool startingKit() const { return ReadField<bool>("startingKit"); }
        void startingKit(bool value) const { WriteField<bool>("startingKit", value); }
        float orgCapMul() const { return ReadField<float>("orgCapMul"); }
        void orgCapMul(float value) const { WriteField<float>("orgCapMul", value); }
        int lastWithdrawTick() const { return ReadField<int>("lastWithdrawTick"); }
        void lastWithdrawTick(int value) const { WriteField<int>("lastWithdrawTick", value); }
        int fallbackStartTick() const { return ReadField<int>("fallbackStartTick"); }
        void fallbackStartTick(int value) const { WriteField<int>("fallbackStartTick", value); }
        void* resumeTarget() const { return ReadField<void*>("resumeTarget"); }
        void resumeTarget(void* value) const { WriteField<void*>("resumeTarget", value); }
        bool hasResumeTarget() const { return ReadField<bool>("hasResumeTarget"); }
        void hasResumeTarget(bool value) const { WriteField<bool>("hasResumeTarget", value); }
        void* lastThreatPos() const { return ReadField<void*>("lastThreatPos"); }
        void lastThreatPos(void* value) const { WriteField<void*>("lastThreatPos", value); }
        int lastThreatTick() const { return ReadField<int>("lastThreatTick"); }
        void lastThreatTick(int value) const { WriteField<int>("lastThreatTick", value); }
        int8_t navSide() const { return ReadField<int8_t>("navSide"); }
        void navSide(int8_t value) const { WriteField<int8_t>("navSide", value); }
        void* navHeading() const { return ReadField<void*>("navHeading"); }
        void navHeading(void* value) const { WriteField<void*>("navHeading", value); }
        float navLeaveDistSq() const { return ReadField<float>("navLeaveDistSq"); }
        void navLeaveDistSq(float value) const { WriteField<float>("navLeaveDistSq", value); }
        void* navTarget() const { return ReadField<void*>("navTarget"); }
        void navTarget(void* value) const { WriteField<void*>("navTarget", value); }
        bool navCrowdFollow() const { return ReadField<bool>("navCrowdFollow"); }
        void navCrowdFollow(bool value) const { WriteField<bool>("navCrowdFollow", value); }
        int navFollowTicks() const { return ReadField<int>("navFollowTicks"); }
        void navFollowTicks(int value) const { WriteField<int>("navFollowTicks", value); }
        void* pathPoints() const { return ReadField<void*>("pathPoints"); }
        void pathPoints(void* value) const { WriteField<void*>("pathPoints", value); }
        int pathCount() const { return ReadField<int>("pathCount"); }
        void pathCount(int value) const { WriteField<int>("pathCount", value); }
        int pathCursor() const { return ReadField<int>("pathCursor"); }
        void pathCursor(int value) const { WriteField<int>("pathCursor", value); }
        void* pathGoal() const { return ReadField<void*>("pathGoal"); }
        void pathGoal(void* value) const { WriteField<void*>("pathGoal", value); }
        bool pathPending() const { return ReadField<bool>("pathPending"); }
        void pathPending(bool value) const { WriteField<bool>("pathPending", value); }
        bool pathTruncated() const { return ReadField<bool>("pathTruncated"); }
        void pathTruncated(bool value) const { WriteField<bool>("pathTruncated", value); }
        void* pathLegFrom() const { return ReadField<void*>("pathLegFrom"); }
        void pathLegFrom(void* value) const { WriteField<void*>("pathLegFrom", value); }
        bool pathPress() const { return ReadField<bool>("pathPress"); }
        void pathPress(bool value) const { WriteField<bool>("pathPress", value); }
        bool navPressHold() const { return ReadField<bool>("navPressHold"); }
        void navPressHold(bool value) const { WriteField<bool>("navPressHold", value); }
        int pathFailUntilTick() const { return ReadField<int>("pathFailUntilTick"); }
        void pathFailUntilTick(int value) const { WriteField<int>("pathFailUntilTick", value); }
        void* mv() const { return ReadField<void*>("mv"); }
        void mv(void* value) const { WriteField<void*>("mv", value); }
        int moveHoldUntilTick() const { return ReadField<int>("moveHoldUntilTick"); }
        void moveHoldUntilTick(int value) const { WriteField<int>("moveHoldUntilTick", value); }
        int navStallCheckTick() const { return ReadField<int>("navStallCheckTick"); }
        void navStallCheckTick(int value) const { WriteField<int>("navStallCheckTick", value); }
        void* navStallCheckPos() const { return ReadField<void*>("navStallCheckPos"); }
        void navStallCheckPos(void* value) const { WriteField<void*>("navStallCheckPos", value); }
        int8_t navStallStrikes() const { return ReadField<int8_t>("navStallStrikes"); }
        void navStallStrikes(int8_t value) const { WriteField<int8_t>("navStallStrikes", value); }
        void* blockedTarget() const { return ReadField<void*>("blockedTarget"); }
        void blockedTarget(void* value) const { WriteField<void*>("blockedTarget", value); }
        int blockedUntilTick() const { return ReadField<int>("blockedUntilTick"); }
        void blockedUntilTick(int value) const { WriteField<int>("blockedUntilTick", value); }
        int lastEnemyId() const { return ReadField<int>("lastEnemyId"); }
        void lastEnemyId(int value) const { WriteField<int>("lastEnemyId", value); }
        float recentBleed() const { return ReadField<float>("recentBleed"); }
        void recentBleed(float value) const { WriteField<float>("recentBleed", value); }
        float supply() const { return ReadField<float>("supply"); }
        void supply(float value) const { WriteField<float>("supply", value); }
        void* logistics() const { return ReadField<void*>("logistics"); }
        void logistics(void* value) const { WriteField<void*>("logistics", value); }
        float spawnTime() const { return ReadField<float>("spawnTime"); }
        void spawnTime(float value) const { WriteField<float>("spawnTime", value); }
    };
}
