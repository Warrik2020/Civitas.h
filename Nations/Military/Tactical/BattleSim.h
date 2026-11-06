#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleSim : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleSim(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleSim") {}
    public:
        void* FormationAt(int f) const { void* args[] = { &f }; return Call("FormationAt", args, 1); }
        void* FormationBlock(int f) const { void* args[] = { &f }; return Call("FormationBlock", args, 1); }
        void* FormationExtra(int f) const { void* args[] = { &f }; return Call("FormationExtra", args, 1); }
        void* FormationName(int f) const { void* args[] = { &f }; return Call("FormationName", args, 1); }
        int FormationOf(int block) const { void* args[] = { &block }; return CallValue<int>("FormationOf", args, 1); }
        int FormationFirstBlock(int f) const { void* args[] = { &f }; return CallValue<int>("FormationFirstBlock", args, 1); }
        int FormationBlockCount(int f) const { void* args[] = { &f }; return CallValue<int>("FormationBlockCount", args, 1); }
        bool FormationSectioned(int f) const { void* args[] = { &f }; return CallValue<bool>("FormationSectioned", args, 1); }
        int DivisionFirstFormation(int div) const { void* args[] = { &div }; return CallValue<int>("DivisionFirstFormation", args, 1); }
        int DivisionFormationCount(int div) const { void* args[] = { &div }; return CallValue<int>("DivisionFormationCount", args, 1); }
        bool FormationOnField(int f) const { void* args[] = { &f }; return CallValue<bool>("FormationOnField", args, 1); }
        bool CanCommandFormation(int f) const { void* args[] = { &f }; return CallValue<bool>("CanCommandFormation", args, 1); }
        void* RefusalForFormation(int f) const { void* args[] = { &f }; return Call("RefusalForFormation", args, 1); }
        void FlashOrderFormation(int f) const { void* args[] = { &f }; Call("FlashOrderFormation", args, 1); }
        void OrderMoveFormation(int f, void* target, bool run) const { void* args[] = { &f, target, &run }; Call("OrderMoveFormation", args, 3); }
        void OrderAttackMoveFormation(int f, void* target, bool run) const { void* args[] = { &f, target, &run }; Call("OrderAttackMoveFormation", args, 3); }
        void OrderAttackFormation(int f, int targetFormation, bool charge) const { void* args[] = { &f, &targetFormation, &charge }; Call("OrderAttackFormation", args, 3); }
        void OrderWithdrawFormation(int f, float distance) const { void* args[] = { &f, &distance }; Call("OrderWithdrawFormation", args, 2); }
        void OrderHaltFormation(int f) const { void* args[] = { &f }; Call("OrderHaltFormation", args, 1); }
        bool CanFormFormation(int f, int shape) const { void* args[] = { &f, &shape }; return CallValue<bool>("CanFormFormation", args, 2); }
        bool SetFormationOf(int f, int shape) const { void* args[] = { &f, &shape }; return CallValue<bool>("SetFormationOf", args, 2); }
        void OrderFormLineFormation(int f, void* centre, void* facing, int files, bool run) const { void* args[] = { &f, centre, facing, &files, &run }; Call("OrderFormLineFormation", args, 5); }
        void OrderHoldLineFormation(int f, void* centre, void* facing, int files, bool run) const { void* args[] = { &f, centre, facing, &files, &run }; Call("OrderHoldLineFormation", args, 5); }
        void NoteFormationOrder(int f, int kind, void* target, bool run) const { void* args[] = { &f, &kind, target, &run }; Call("NoteFormationOrder", args, 4); }
        void SetRunFormation(int f, bool run) const { void* args[] = { &f, &run }; Call("SetRunFormation", args, 2); }
        void SetHoldFireFormation(int f, bool hold) const { void* args[] = { &f, &hold }; Call("SetHoldFireFormation", args, 2); }
        void DigInFormation(int f) const { void* args[] = { &f }; Call("DigInFormation", args, 1); }
        bool FormationUsesGround(int f) const { void* args[] = { &f }; return CallValue<bool>("FormationUsesGround", args, 1); }
        void Advance(void* aiControlsSide0) const { void* args[] = { aiControlsSide0 }; Call("Advance", args, 1); }
        void Advance(void* aiControlsSide0, int quanta) const { void* args[] = { aiControlsSide0, &quanta }; Call("Advance", args, 2); }
        bool Due(int s, int every, int quanta) const { void* args[] = { &s, &every, &quanta }; return CallStaticValue<bool>("Due", args, 3); }
        bool DivisionWithdrawn(int div) const { void* args[] = { &div }; return CallValue<bool>("DivisionWithdrawn", args, 1); }
        float DivisionLethality(int div) const { void* args[] = { &div }; return CallValue<float>("DivisionLethality", args, 1); }
        void SetDivisionLethality(int div, float mul) const { void* args[] = { &div, &mul }; Call("SetDivisionLethality", args, 2); }
        void RecomputeSideRears() const { Call("RecomputeSideRears", nullptr, 0); }
        void WithdrawDivision(int div) const { void* args[] = { &div }; Call("WithdrawDivision", args, 1); }
        void* SoldierForm(int f) const { void* args[] = { &f }; return Call("SoldierForm", args, 1); }
        void* UnitStatsOf(int b) const { void* args[] = { &b }; return Call("UnitStatsOf", args, 1); }
        void* UnitParamsOf(int b) const { void* args[] = { &b }; return Call("UnitParamsOf", args, 1); }
        void* SoldierOf(int i) const { void* args[] = { &i }; return Call("SoldierOf", args, 1); }
        void SetFireModeFormation(int f, uint8_t mode) const { void* args[] = { &f, &mode }; Call("SetFireModeFormation", args, 2); }
        void SetAggressionFormation(int f, uint8_t aggression) const { void* args[] = { &f, &aggression }; Call("SetAggressionFormation", args, 2); }
        void SetFormationHeld(int f, bool held) const { void* args[] = { &f, &held }; Call("SetFormationHeld", args, 2); }
        bool FormationHeld(int f) const { void* args[] = { &f }; return CallValue<bool>("FormationHeld", args, 1); }
        void ReleaseDivisionHeld(int div) const { void* args[] = { &div }; Call("ReleaseDivisionHeld", args, 1); }
        int MenInWorks(int div, int& alive) const { void* args[] = { &div, &alive }; return CallValue<int>("MenInWorks", args, 2); }
        void* Man(int i) const { void* args[] = { &i }; return Call("Man", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* SideRear(int side) const { void* args[] = { &side }; return Call("SideRear", args, 1); }
        void* EnemyCentroid(int side, float& aliveWeight) const { void* args[] = { &side, &aliveWeight }; return Call("EnemyCentroid", args, 2); }
        void* Division(int i) const { void* args[] = { &i }; return Call("Division", args, 1); }
        bool DivisionRemoved(int i) const { void* args[] = { &i }; return CallValue<bool>("DivisionRemoved", args, 1); }
        int AddDivision(void* spec) const { void* args[] = { spec }; return CallValue<int>("AddDivision", args, 1); }
        float Reform(int b, int forcedFiles, bool snap = true) const { void* args[] = { &b, &forcedFiles, &snap }; return CallValue<float>("Reform", args, 3); }
        void RemoveDivision(int div) const { void* args[] = { &div }; Call("RemoveDivision", args, 1); }
        void* Battalion(int b) const { void* args[] = { &b }; return Call("Battalion", args, 1); }
        void* ExtraOf(int b) const { void* args[] = { &b }; return Call("ExtraOf", args, 1); }
        void* BattalionName(int b) const { void* args[] = { &b }; return Call("BattalionName", args, 1); }
        bool BattalionOnField(int b) const { void* args[] = { &b }; return CallValue<bool>("BattalionOnField", args, 1); }
        void* DivisionCentroid(int div, int& alive, int& aliveOnField) const { void* args[] = { &div, &alive, &aliveOnField }; return Call("DivisionCentroid", args, 3); }
        void* DivisionMarker(int div, int& alive, int& aliveOnField) const { void* args[] = { &div, &alive, &aliveOnField }; return Call("DivisionMarker", args, 3); }
        float DivisionMorale(int div) const { void* args[] = { &div }; return CallValue<float>("DivisionMorale", args, 1); }
        void* DivisionFacing(int div) const { void* args[] = { &div }; return Call("DivisionFacing", args, 1); }
        int NearestEnemyDivision(int div, float& dist) const { void* args[] = { &div, &dist }; return CallValue<int>("NearestEnemyDivision", args, 2); }
        bool DivisionInContact(int div) const { void* args[] = { &div }; return CallValue<bool>("DivisionInContact", args, 1); }
        bool DivisionLeftField(int div) const { void* args[] = { &div }; return CallValue<bool>("DivisionLeftField", args, 1); }
        int SideAlive(int side) const { void* args[] = { &side }; return CallValue<int>("SideAlive", args, 1); }
        float SideStrength(int side) const { void* args[] = { &side }; return CallValue<float>("SideStrength", args, 1); }
        int SideAliveOnField(int side) const { void* args[] = { &side }; return CallValue<int>("SideAliveOnField", args, 1); }
        int SideStartAlive(int side) const { void* args[] = { &side }; return CallValue<int>("SideStartAlive", args, 1); }
        int PickBattalion(void* p, int side, float pad) const { void* args[] = { p, &side, &pad }; return CallValue<int>("PickBattalion", args, 3); }
        void SetSelected(int b, bool on) const { void* args[] = { &b, &on }; Call("SetSelected", args, 2); }
        bool IsSelected(int b) const { void* args[] = { &b }; return CallValue<bool>("IsSelected", args, 1); }
        void ClearSelected() const { Call("ClearSelected", nullptr, 0); }
        bool CanCommand(int b) const { void* args[] = { &b }; return CallValue<bool>("CanCommand", args, 1); }
        void FlashOrder(int b) const { void* args[] = { &b }; Call("FlashOrder", args, 1); }
        float OrderFlash(int b) const { void* args[] = { &b }; return CallValue<float>("OrderFlash", args, 1); }
        void* RefusalFor(int b) const { void* args[] = { &b }; return Call("RefusalFor", args, 1); }
        void OrderMove(int b, void* target, bool run) const { void* args[] = { &b, target, &run }; Call("OrderMove", args, 3); }
        void OrderAttackMove(int b, void* target, bool run) const { void* args[] = { &b, target, &run }; Call("OrderAttackMove", args, 3); }
        void OrderAttack(int b, int targetBat, bool charge) const { void* args[] = { &b, &targetBat, &charge }; Call("OrderAttack", args, 3); }
        void OrderWithdraw(int b) const { void* args[] = { &b }; Call("OrderWithdraw", args, 1); }
        void OrderWithdraw(int b, float distance) const { void* args[] = { &b, &distance }; Call("OrderWithdraw", args, 2); }
        void OrderHalt(int b) const { void* args[] = { &b }; Call("OrderHalt", args, 1); }
        bool CanForm(int b, int f) const { void* args[] = { &b, &f }; return CallValue<bool>("CanForm", args, 2); }
        bool SetFormation(int b, int f) const { void* args[] = { &b, &f }; return CallValue<bool>("SetFormation", args, 2); }
        void OrderFormLine(int b, void* centre, void* facing, int files, bool run) const { void* args[] = { &b, centre, facing, &files, &run }; Call("OrderFormLine", args, 5); }
        void OrderHoldLine(int b, void* centre, void* facing, int files, bool run) const { void* args[] = { &b, centre, facing, &files, &run }; Call("OrderHoldLine", args, 5); }
        void SetRun(int b, bool run) const { void* args[] = { &b, &run }; Call("SetRun", args, 2); }
        void SetHoldFire(int b, bool hold) const { void* args[] = { &b, &hold }; Call("SetHoldFire", args, 2); }
        void DigIn(int b) const { void* args[] = { &b }; Call("DigIn", args, 1); }
        void* ClampArenaPoint(void* p) const { void* args[] = { p }; return Call("ClampArenaPoint", args, 1); }
        void Step() const { Call("Step", nullptr, 0); }
        float TerrainSpeedAt(void* p) const { void* args[] = { p }; return CallValue<float>("TerrainSpeedAt", args, 1); }
        float TerrainHeightAt(void* p) const { void* args[] = { p }; return CallValue<float>("TerrainHeightAt", args, 1); }
        void* CoverNear(void* want, float radius, uint32_t salt) const { void* args[] = { want, &radius, &salt }; return Call("CoverNear", args, 3); }
        void Pack(float extrapolate, int playerSide) const { void* args[] = { &extrapolate, &playerSide }; Call("Pack", args, 2); }
        void Pack(float extrapolate, int playerSide, void* visible) const { void* args[] = { &extrapolate, &playerSide, visible }; Call("Pack", args, 3); }
        void* FormationStats(int f) const { void* args[] = { &f }; return Call("FormationStats", args, 1); }
        void Execute(int b) const { void* args[] = { &b }; Call("Execute", args, 1); }
        int ChargeMaxQuanta() const { return ReadStaticField<int>("ChargeMaxQuanta"); }
        int ShellCap() const { return ReadStaticField<int>("ShellCap"); }
        void* Setup() const { return ReadField<void*>("Setup"); }
        void* ArenaSize() const { return ReadField<void*>("ArenaSize"); }
        uint32_t Seed() const { return ReadField<uint32_t>("Seed"); }
        void* DeathsSinceTick() const { return ReadField<void*>("DeathsSinceTick"); }
        void SetDeathsSinceTick(void* value) const { WriteField<void*>("DeathsSinceTick", value); }
        void* KillsByAttacker() const { return ReadField<void*>("KillsByAttacker"); }
        void SetKillsByAttacker(void* value) const { WriteField<void*>("KillsByAttacker", value); }
        void* RoutedThisStep() const { return ReadField<void*>("RoutedThisStep"); }
        void* Surrendered() const { return ReadField<void*>("Surrendered"); }
        void* RoutedPending() const { return ReadField<void*>("RoutedPending"); }
        void* SurrenderedPending() const { return ReadField<void*>("SurrenderedPending"); }
        void* RoutDeaths() const { return ReadField<void*>("RoutDeaths"); }
        void* PeakSurround() const { return ReadField<void*>("PeakSurround"); }
        void* RalliedThisStep() const { return ReadField<void*>("RalliedThisStep"); }
        int DeathsThisStep() const { return ReadField<int>("DeathsThisStep"); }
        void SetDeathsThisStep(int value) const { WriteField<int>("DeathsThisStep", value); }
        int ShotsThisStep() const { return ReadField<int>("ShotsThisStep"); }
        void SetShotsThisStep(int value) const { WriteField<int>("ShotsThisStep", value); }
        int DotBatchSize() const { return ReadStaticField<int>("DotBatchSize"); }
        int division() const { return ReadField<int>("division"); }
        void SetDivision(int value) const { WriteField<int>("division", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int firstBlock() const { return ReadField<int>("firstBlock"); }
        void SetFirstBlock(int value) const { WriteField<int>("firstBlock", value); }
        int blockCount() const { return ReadField<int>("blockCount"); }
        void SetBlockCount(int value) const { WriteField<int>("blockCount", value); }
        int menStart() const { return ReadField<int>("menStart"); }
        void SetMenStart(int value) const { WriteField<int>("menStart", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void SetMenCount(int value) const { WriteField<int>("menCount", value); }
        uint8_t arm() const { return ReadField<uint8_t>("arm"); }
        void SetArm(uint8_t value) const { WriteField<uint8_t>("arm", value); }
        uint8_t sectioned() const { return ReadField<uint8_t>("sectioned"); }
        void SetSectioned(uint8_t value) const { WriteField<uint8_t>("sectioned", value); }
        float boundT() const { return ReadField<float>("boundT"); }
        void SetBoundT(float value) const { WriteField<float>("boundT", value); }
        uint8_t boundPhase() const { return ReadField<uint8_t>("boundPhase"); }
        void SetBoundPhase(uint8_t value) const { WriteField<uint8_t>("boundPhase", value); }
        uint8_t bounding() const { return ReadField<uint8_t>("bounding"); }
        void SetBounding(uint8_t value) const { WriteField<uint8_t>("bounding", value); }
        float moraleCap() const { return ReadField<float>("moraleCap"); }
        void SetMoraleCap(float value) const { WriteField<float>("moraleCap", value); }
        float nerveEff() const { return ReadField<float>("nerveEff"); }
        void SetNerveEff(float value) const { WriteField<float>("nerveEff", value); }
        uint8_t nerve() const { return ReadField<uint8_t>("nerve"); }
        void SetNerve(uint8_t value) const { WriteField<uint8_t>("nerve", value); }
        int routStep() const { return ReadField<int>("routStep"); }
        void SetRoutStep(int value) const { WriteField<int>("routStep", value); }
        uint8_t fireMode() const { return ReadField<uint8_t>("fireMode"); }
        void SetFireMode(uint8_t value) const { WriteField<uint8_t>("fireMode", value); }
        uint8_t aggression() const { return ReadField<uint8_t>("aggression"); }
        void SetAggression(uint8_t value) const { WriteField<uint8_t>("aggression", value); }
        bool held() const { return ReadField<bool>("held"); }
        void SetHeld(bool value) const { WriteField<bool>("held", value); }
        float cmdT() const { return ReadField<float>("cmdT"); }
        void SetCmdT(float value) const { WriteField<float>("cmdT", value); }
        float engageDist() const { return ReadField<float>("engageDist"); }
        void SetEngageDist(float value) const { WriteField<float>("engageDist", value); }
        float pressT() const { return ReadField<float>("pressT"); }
        void SetPressT(float value) const { WriteField<float>("pressT", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        float boundT() const { return ReadField<float>("boundT"); }
        void SetBoundT(float value) const { WriteField<float>("boundT", value); }
        uint8_t boundPhase() const { return ReadField<uint8_t>("boundPhase"); }
        void SetBoundPhase(uint8_t value) const { WriteField<uint8_t>("boundPhase", value); }
        float lossWindow() const { return ReadField<float>("lossWindow"); }
        void SetLossWindow(float value) const { WriteField<float>("lossWindow", value); }
        float inflictWindow() const { return ReadField<float>("inflictWindow"); }
        void SetInflictWindow(float value) const { WriteField<float>("inflictWindow", value); }
        int volleyStep() const { return ReadField<int>("volleyStep"); }
        void SetVolleyStep(int value) const { WriteField<int>("volleyStep", value); }
        void* holdFacing() const { return ReadField<void*>("holdFacing"); }
        void SetHoldFacing(void* value) const { WriteField<void*>("holdFacing", value); }
        int lastOrder() const { return ReadField<int>("lastOrder"); }
        void SetLastOrder(int value) const { WriteField<int>("lastOrder", value); }
        int lastOrderBat() const { return ReadField<int>("lastOrderBat"); }
        void SetLastOrderBat(int value) const { WriteField<int>("lastOrderBat", value); }
        void* lastOrderTarget() const { return ReadField<void*>("lastOrderTarget"); }
        void SetLastOrderTarget(void* value) const { WriteField<void*>("lastOrderTarget", value); }
        bool diverted() const { return ReadField<bool>("diverted"); }
        void SetDiverted(bool value) const { WriteField<bool>("diverted", value); }
        bool screening() const { return ReadField<bool>("screening"); }
        void SetScreening(bool value) const { WriteField<bool>("screening", value); }
        float flankT() const { return ReadField<float>("flankT"); }
        void SetFlankT(float value) const { WriteField<float>("flankT", value); }
        uint8_t Normal() const { return ReadStaticField<uint8_t>("Normal"); }
        uint8_t Press() const { return ReadStaticField<uint8_t>("Press"); }
        uint8_t HoldGround() const { return ReadStaticField<uint8_t>("HoldGround"); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* works() const { return ReadField<void*>("works"); }
        void SetWorks(void* value) const { WriteField<void*>("works", value); }
        void* frac() const { return ReadField<void*>("frac"); }
        void SetFrac(void* value) const { WriteField<void*>("frac", value); }
        uint32_t step() const { return ReadField<uint32_t>("step"); }
        void SetStep(uint32_t value) const { WriteField<uint32_t>("step", value); }
        uint32_t quanta() const { return ReadField<uint32_t>("quanta"); }
        void SetQuanta(uint32_t value) const { WriteField<uint32_t>("quanta", value); }
        int order() const { return ReadField<int>("order"); }
        void SetOrder(int value) const { WriteField<int>("order", value); }
        void* orderTarget() const { return ReadField<void*>("orderTarget"); }
        void SetOrderTarget(void* value) const { WriteField<void*>("orderTarget", value); }
        int orderBat() const { return ReadField<int>("orderBat"); }
        void SetOrderBat(int value) const { WriteField<int>("orderBat", value); }
        bool orderRun() const { return ReadField<bool>("orderRun"); }
        void SetOrderRun(bool value) const { WriteField<bool>("orderRun", value); }
        float volleyT() const { return ReadField<float>("volleyT"); }
        void SetVolleyT(float value) const { WriteField<float>("volleyT", value); }
        float reformT() const { return ReadField<float>("reformT"); }
        void SetReformT(float value) const { WriteField<float>("reformT", value); }
        int reformAlive() const { return ReadField<int>("reformAlive"); }
        void SetReformAlive(int value) const { WriteField<int>("reformAlive", value); }
        bool reformDue() const { return ReadField<bool>("reformDue"); }
        void SetReformDue(bool value) const { WriteField<bool>("reformDue", value); }
        float chargeT() const { return ReadField<float>("chargeT"); }
        void SetChargeT(float value) const { WriteField<float>("chargeT", value); }
        float digT() const { return ReadField<float>("digT"); }
        void SetDigT(float value) const { WriteField<float>("digT", value); }
        float contactT() const { return ReadField<float>("contactT"); }
        void SetContactT(float value) const { WriteField<float>("contactT", value); }
        float gunT() const { return ReadField<float>("gunT"); }
        void SetGunT(float value) const { WriteField<float>("gunT", value); }
        int guns() const { return ReadField<int>("guns"); }
        void SetGuns(int value) const { WriteField<int>("guns", value); }
        int startAlive() const { return ReadField<int>("startAlive"); }
        void SetStartAlive(int value) const { WriteField<int>("startAlive", value); }
        int establishment() const { return ReadField<int>("establishment"); }
        void SetEstablishment(int value) const { WriteField<int>("establishment", value); }
        void* profile() const { return ReadField<void*>("profile"); }
        void SetProfile(void* value) const { WriteField<void*>("profile", value); }
        int16_t aiLevel() const { return ReadField<int16_t>("aiLevel"); }
        void SetAiLevel(int16_t value) const { WriteField<int16_t>("aiLevel", value); }
        uint8_t aiState() const { return ReadField<uint8_t>("aiState"); }
        void SetAiState(uint8_t value) const { WriteField<uint8_t>("aiState", value); }
        float aiT() const { return ReadField<float>("aiT"); }
        void SetAiT(float value) const { WriteField<float>("aiT", value); }
        float planT() const { return ReadField<float>("planT"); }
        void SetPlanT(float value) const { WriteField<float>("planT", value); }
        float squareT() const { return ReadField<float>("squareT"); }
        void SetSquareT(float value) const { WriteField<float>("squareT", value); }
        bool leftField() const { return ReadField<bool>("leftField"); }
        void SetLeftField(bool value) const { WriteField<bool>("leftField", value); }
        bool routedOnce() const { return ReadField<bool>("routedOnce"); }
        void SetRoutedOnce(bool value) const { WriteField<bool>("routedOnce", value); }
        float surrenderT() const { return ReadField<float>("surrenderT"); }
        void SetSurrenderT(float value) const { WriteField<float>("surrenderT", value); }
        bool pocketed() const { return ReadField<bool>("pocketed"); }
        void SetPocketed(bool value) const { WriteField<bool>("pocketed", value); }
        float stallT() const { return ReadField<float>("stallT"); }
        void SetStallT(float value) const { WriteField<float>("stallT", value); }
        float orderFlashT() const { return ReadField<float>("orderFlashT"); }
        void SetOrderFlashT(float value) const { WriteField<float>("orderFlashT", value); }
        bool chargeResolved() const { return ReadField<bool>("chargeResolved"); }
        void SetChargeResolved(bool value) const { WriteField<bool>("chargeResolved", value); }
        uint8_t boundHold() const { return ReadField<uint8_t>("boundHold"); }
        void SetBoundHold(uint8_t value) const { WriteField<uint8_t>("boundHold", value); }
        uint8_t holdGround() const { return ReadField<uint8_t>("holdGround"); }
        void SetHoldGround(uint8_t value) const { WriteField<uint8_t>("holdGround", value); }
        uint8_t inTown() const { return ReadField<uint8_t>("inTown"); }
        void SetInTown(uint8_t value) const { WriteField<uint8_t>("inTown", value); }
        uint8_t inCity() const { return ReadField<uint8_t>("inCity"); }
        void SetInCity(uint8_t value) const { WriteField<uint8_t>("inCity", value); }
        uint8_t groundSampled() const { return ReadField<uint8_t>("groundSampled"); }
        void SetGroundSampled(uint8_t value) const { WriteField<uint8_t>("groundSampled", value); }
        uint8_t frontIndex() const { return ReadField<uint8_t>("frontIndex"); }
        void SetFrontIndex(uint8_t value) const { WriteField<uint8_t>("frontIndex", value); }
        float chargeCooldown() const { return ReadField<float>("chargeCooldown"); }
        void SetChargeCooldown(float value) const { WriteField<float>("chargeCooldown", value); }
        bool reserve() const { return ReadField<bool>("reserve"); }
        void SetReserve(bool value) const { WriteField<bool>("reserve", value); }
        bool entrenched() const { return ReadField<bool>("entrenched"); }
        void SetEntrenched(bool value) const { WriteField<bool>("entrenched", value); }
        bool released() const { return ReadField<bool>("released"); }
        void SetReleased(bool value) const { WriteField<bool>("released", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float own() const { return ReadField<float>("own"); }
        void SetOwn(float value) const { WriteField<float>("own", value); }
        float ownStart() const { return ReadField<float>("ownStart"); }
        void SetOwnStart(float value) const { WriteField<float>("ownStart", value); }
        float foe() const { return ReadField<float>("foe"); }
        void SetFoe(float value) const { WriteField<float>("foe", value); }
        float ownW() const { return ReadField<float>("ownW"); }
        void SetOwnW(float value) const { WriteField<float>("ownW", value); }
        float foeW() const { return ReadField<float>("foeW"); }
        void SetFoeW(float value) const { WriteField<float>("foeW", value); }
        void* ownC() const { return ReadField<void*>("ownC"); }
        void SetOwnC(void* value) const { WriteField<void*>("ownC", value); }
        void* foeC() const { return ReadField<void*>("foeC"); }
        void SetFoeC(void* value) const { WriteField<void*>("foeC", value); }
        void* axis() const { return ReadField<void*>("axis"); }
        void SetAxis(void* value) const { WriteField<void*>("axis", value); }
        void* lateral() const { return ReadField<void*>("lateral"); }
        void SetLateral(void* value) const { WriteField<void*>("lateral", value); }
        bool collapsed() const { return ReadField<bool>("collapsed"); }
        void SetCollapsed(bool value) const { WriteField<bool>("collapsed", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void SetRatio(float value) const { WriteField<float>("ratio", value); }
    };
}
