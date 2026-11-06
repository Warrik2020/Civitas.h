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
        void* FormationAt(int f) const { void* __callArgs[] = { &f }; return Call("FormationAt", __callArgs, 1); }
        void* FormationBlock(int f) const { void* __callArgs[] = { &f }; return Call("FormationBlock", __callArgs, 1); }
        void* FormationExtra(int f) const { void* __callArgs[] = { &f }; return Call("FormationExtra", __callArgs, 1); }
        void* FormationName(int f) const { void* __callArgs[] = { &f }; return Call("FormationName", __callArgs, 1); }
        int FormationOf(int block) const { void* __callArgs[] = { &block }; return CallValue<int>("FormationOf", __callArgs, 1); }
        int FormationFirstBlock(int f) const { void* __callArgs[] = { &f }; return CallValue<int>("FormationFirstBlock", __callArgs, 1); }
        int FormationBlockCount(int f) const { void* __callArgs[] = { &f }; return CallValue<int>("FormationBlockCount", __callArgs, 1); }
        bool FormationSectioned(int f) const { void* __callArgs[] = { &f }; return CallValue<bool>("FormationSectioned", __callArgs, 1); }
        int DivisionFirstFormation(int div) const { void* __callArgs[] = { &div }; return CallValue<int>("DivisionFirstFormation", __callArgs, 1); }
        int DivisionFormationCount(int div) const { void* __callArgs[] = { &div }; return CallValue<int>("DivisionFormationCount", __callArgs, 1); }
        bool FormationOnField(int f) const { void* __callArgs[] = { &f }; return CallValue<bool>("FormationOnField", __callArgs, 1); }
        bool CanCommandFormation(int f) const { void* __callArgs[] = { &f }; return CallValue<bool>("CanCommandFormation", __callArgs, 1); }
        void* RefusalForFormation(int f) const { void* __callArgs[] = { &f }; return Call("RefusalForFormation", __callArgs, 1); }
        void FlashOrderFormation(int f) const { void* __callArgs[] = { &f }; Call("FlashOrderFormation", __callArgs, 1); }
        void OrderMoveFormation(int f, void* target, bool run) const { void* __callArgs[] = { &f, target, &run }; Call("OrderMoveFormation", __callArgs, 3); }
        void OrderAttackMoveFormation(int f, void* target, bool run) const { void* __callArgs[] = { &f, target, &run }; Call("OrderAttackMoveFormation", __callArgs, 3); }
        void OrderAttackFormation(int f, int targetFormation, bool charge) const { void* __callArgs[] = { &f, &targetFormation, &charge }; Call("OrderAttackFormation", __callArgs, 3); }
        void OrderWithdrawFormation(int f, float distance) const { void* __callArgs[] = { &f, &distance }; Call("OrderWithdrawFormation", __callArgs, 2); }
        void OrderHaltFormation(int f) const { void* __callArgs[] = { &f }; Call("OrderHaltFormation", __callArgs, 1); }
        bool CanFormFormation(int f, int shape) const { void* __callArgs[] = { &f, &shape }; return CallValue<bool>("CanFormFormation", __callArgs, 2); }
        bool SetFormationOf(int f, int shape) const { void* __callArgs[] = { &f, &shape }; return CallValue<bool>("SetFormationOf", __callArgs, 2); }
        void OrderFormLineFormation(int f, void* centre, void* facing, int files, bool run) const { void* __callArgs[] = { &f, centre, facing, &files, &run }; Call("OrderFormLineFormation", __callArgs, 5); }
        void OrderHoldLineFormation(int f, void* centre, void* facing, int files, bool run) const { void* __callArgs[] = { &f, centre, facing, &files, &run }; Call("OrderHoldLineFormation", __callArgs, 5); }
        void NoteFormationOrder(int f, int kind, void* target, bool run) const { void* __callArgs[] = { &f, &kind, target, &run }; Call("NoteFormationOrder", __callArgs, 4); }
        void SetRunFormation(int f, bool run) const { void* __callArgs[] = { &f, &run }; Call("SetRunFormation", __callArgs, 2); }
        void SetHoldFireFormation(int f, bool hold) const { void* __callArgs[] = { &f, &hold }; Call("SetHoldFireFormation", __callArgs, 2); }
        void DigInFormation(int f) const { void* __callArgs[] = { &f }; Call("DigInFormation", __callArgs, 1); }
        bool FormationUsesGround(int f) const { void* __callArgs[] = { &f }; return CallValue<bool>("FormationUsesGround", __callArgs, 1); }
        void Advance(void* aiControlsSide0) const { void* __callArgs[] = { aiControlsSide0 }; Call("Advance", __callArgs, 1); }
        void Advance(void* aiControlsSide0, int quanta) const { void* __callArgs[] = { aiControlsSide0, &quanta }; Call("Advance", __callArgs, 2); }
        bool Due(int s, int every, int quanta) const { void* __callArgs[] = { &s, &every, &quanta }; return CallStaticValue<bool>("Due", __callArgs, 3); }
        bool DivisionWithdrawn(int div) const { void* __callArgs[] = { &div }; return CallValue<bool>("DivisionWithdrawn", __callArgs, 1); }
        float DivisionLethality(int div) const { void* __callArgs[] = { &div }; return CallValue<float>("DivisionLethality", __callArgs, 1); }
        void SetDivisionLethality(int div, float mul) const { void* __callArgs[] = { &div, &mul }; Call("SetDivisionLethality", __callArgs, 2); }
        void RecomputeSideRears() const { Call("RecomputeSideRears", nullptr, 0); }
        void WithdrawDivision(int div) const { void* __callArgs[] = { &div }; Call("WithdrawDivision", __callArgs, 1); }
        void* SoldierForm(int f) const { void* __callArgs[] = { &f }; return Call("SoldierForm", __callArgs, 1); }
        void* UnitStatsOf(int b) const { void* __callArgs[] = { &b }; return Call("UnitStatsOf", __callArgs, 1); }
        void* UnitParamsOf(int b) const { void* __callArgs[] = { &b }; return Call("UnitParamsOf", __callArgs, 1); }
        void* SoldierOf(int i) const { void* __callArgs[] = { &i }; return Call("SoldierOf", __callArgs, 1); }
        void SetFireModeFormation(int f, uint8_t mode) const { void* __callArgs[] = { &f, &mode }; Call("SetFireModeFormation", __callArgs, 2); }
        void SetAggressionFormation(int f, uint8_t aggression) const { void* __callArgs[] = { &f, &aggression }; Call("SetAggressionFormation", __callArgs, 2); }
        void SetFormationHeld(int f, bool held) const { void* __callArgs[] = { &f, &held }; Call("SetFormationHeld", __callArgs, 2); }
        bool FormationHeld(int f) const { void* __callArgs[] = { &f }; return CallValue<bool>("FormationHeld", __callArgs, 1); }
        void ReleaseDivisionHeld(int div) const { void* __callArgs[] = { &div }; Call("ReleaseDivisionHeld", __callArgs, 1); }
        int MenInWorks(int div, int& alive) const { void* __callArgs[] = { &div, &alive }; return CallValue<int>("MenInWorks", __callArgs, 2); }
        void* Man(int i) const { void* __callArgs[] = { &i }; return Call("Man", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* SideRear(int side) const { void* __callArgs[] = { &side }; return Call("SideRear", __callArgs, 1); }
        void* EnemyCentroid(int side, float& aliveWeight) const { void* __callArgs[] = { &side, &aliveWeight }; return Call("EnemyCentroid", __callArgs, 2); }
        void* Division(int i) const { void* __callArgs[] = { &i }; return Call("Division", __callArgs, 1); }
        bool DivisionRemoved(int i) const { void* __callArgs[] = { &i }; return CallValue<bool>("DivisionRemoved", __callArgs, 1); }
        int AddDivision(void* spec) const { void* __callArgs[] = { spec }; return CallValue<int>("AddDivision", __callArgs, 1); }
        float Reform(int b, int forcedFiles, bool snap = true) const { void* __callArgs[] = { &b, &forcedFiles, &snap }; return CallValue<float>("Reform", __callArgs, 3); }
        void RemoveDivision(int div) const { void* __callArgs[] = { &div }; Call("RemoveDivision", __callArgs, 1); }
        void* Battalion(int b) const { void* __callArgs[] = { &b }; return Call("Battalion", __callArgs, 1); }
        void* ExtraOf(int b) const { void* __callArgs[] = { &b }; return Call("ExtraOf", __callArgs, 1); }
        void* BattalionName(int b) const { void* __callArgs[] = { &b }; return Call("BattalionName", __callArgs, 1); }
        bool BattalionOnField(int b) const { void* __callArgs[] = { &b }; return CallValue<bool>("BattalionOnField", __callArgs, 1); }
        void* DivisionCentroid(int div, int& alive, int& aliveOnField) const { void* __callArgs[] = { &div, &alive, &aliveOnField }; return Call("DivisionCentroid", __callArgs, 3); }
        void* DivisionMarker(int div, int& alive, int& aliveOnField) const { void* __callArgs[] = { &div, &alive, &aliveOnField }; return Call("DivisionMarker", __callArgs, 3); }
        float DivisionMorale(int div) const { void* __callArgs[] = { &div }; return CallValue<float>("DivisionMorale", __callArgs, 1); }
        void* DivisionFacing(int div) const { void* __callArgs[] = { &div }; return Call("DivisionFacing", __callArgs, 1); }
        int NearestEnemyDivision(int div, float& dist) const { void* __callArgs[] = { &div, &dist }; return CallValue<int>("NearestEnemyDivision", __callArgs, 2); }
        bool DivisionInContact(int div) const { void* __callArgs[] = { &div }; return CallValue<bool>("DivisionInContact", __callArgs, 1); }
        bool DivisionLeftField(int div) const { void* __callArgs[] = { &div }; return CallValue<bool>("DivisionLeftField", __callArgs, 1); }
        int SideAlive(int side) const { void* __callArgs[] = { &side }; return CallValue<int>("SideAlive", __callArgs, 1); }
        float SideStrength(int side) const { void* __callArgs[] = { &side }; return CallValue<float>("SideStrength", __callArgs, 1); }
        int SideAliveOnField(int side) const { void* __callArgs[] = { &side }; return CallValue<int>("SideAliveOnField", __callArgs, 1); }
        int SideStartAlive(int side) const { void* __callArgs[] = { &side }; return CallValue<int>("SideStartAlive", __callArgs, 1); }
        int PickBattalion(void* p, int side, float pad) const { void* __callArgs[] = { p, &side, &pad }; return CallValue<int>("PickBattalion", __callArgs, 3); }
        void SetSelected(int b, bool on) const { void* __callArgs[] = { &b, &on }; Call("SetSelected", __callArgs, 2); }
        bool IsSelected(int b) const { void* __callArgs[] = { &b }; return CallValue<bool>("IsSelected", __callArgs, 1); }
        void ClearSelected() const { Call("ClearSelected", nullptr, 0); }
        bool CanCommand(int b) const { void* __callArgs[] = { &b }; return CallValue<bool>("CanCommand", __callArgs, 1); }
        void FlashOrder(int b) const { void* __callArgs[] = { &b }; Call("FlashOrder", __callArgs, 1); }
        float OrderFlash(int b) const { void* __callArgs[] = { &b }; return CallValue<float>("OrderFlash", __callArgs, 1); }
        void* RefusalFor(int b) const { void* __callArgs[] = { &b }; return Call("RefusalFor", __callArgs, 1); }
        void OrderMove(int b, void* target, bool run) const { void* __callArgs[] = { &b, target, &run }; Call("OrderMove", __callArgs, 3); }
        void OrderAttackMove(int b, void* target, bool run) const { void* __callArgs[] = { &b, target, &run }; Call("OrderAttackMove", __callArgs, 3); }
        void OrderAttack(int b, int targetBat, bool charge) const { void* __callArgs[] = { &b, &targetBat, &charge }; Call("OrderAttack", __callArgs, 3); }
        void OrderWithdraw(int b) const { void* __callArgs[] = { &b }; Call("OrderWithdraw", __callArgs, 1); }
        void OrderWithdraw(int b, float distance) const { void* __callArgs[] = { &b, &distance }; Call("OrderWithdraw", __callArgs, 2); }
        void OrderHalt(int b) const { void* __callArgs[] = { &b }; Call("OrderHalt", __callArgs, 1); }
        bool CanForm(int b, int f) const { void* __callArgs[] = { &b, &f }; return CallValue<bool>("CanForm", __callArgs, 2); }
        bool SetFormation(int b, int f) const { void* __callArgs[] = { &b, &f }; return CallValue<bool>("SetFormation", __callArgs, 2); }
        void OrderFormLine(int b, void* centre, void* facing, int files, bool run) const { void* __callArgs[] = { &b, centre, facing, &files, &run }; Call("OrderFormLine", __callArgs, 5); }
        void OrderHoldLine(int b, void* centre, void* facing, int files, bool run) const { void* __callArgs[] = { &b, centre, facing, &files, &run }; Call("OrderHoldLine", __callArgs, 5); }
        void SetRun(int b, bool run) const { void* __callArgs[] = { &b, &run }; Call("SetRun", __callArgs, 2); }
        void SetHoldFire(int b, bool hold) const { void* __callArgs[] = { &b, &hold }; Call("SetHoldFire", __callArgs, 2); }
        void DigIn(int b) const { void* __callArgs[] = { &b }; Call("DigIn", __callArgs, 1); }
        void* ClampArenaPoint(void* p) const { void* __callArgs[] = { p }; return Call("ClampArenaPoint", __callArgs, 1); }
        void Step() const { Call("Step", nullptr, 0); }
        float TerrainSpeedAt(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("TerrainSpeedAt", __callArgs, 1); }
        float TerrainHeightAt(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("TerrainHeightAt", __callArgs, 1); }
        void* CoverNear(void* want, float radius, uint32_t salt) const { void* __callArgs[] = { want, &radius, &salt }; return Call("CoverNear", __callArgs, 3); }
        void Pack(float extrapolate, int playerSide) const { void* __callArgs[] = { &extrapolate, &playerSide }; Call("Pack", __callArgs, 2); }
        void Pack(float extrapolate, int playerSide, void* visible) const { void* __callArgs[] = { &extrapolate, &playerSide, visible }; Call("Pack", __callArgs, 3); }
        void* FormationStats(int f) const { void* __callArgs[] = { &f }; return Call("FormationStats", __callArgs, 1); }
        int ChargeMaxQuanta() const { return ReadStaticField<int>("ChargeMaxQuanta"); }
        int ShellCap() const { return ReadStaticField<int>("ShellCap"); }
        void* Setup() const { return ReadField<void*>("Setup"); }
        void* ArenaSize() const { return ReadField<void*>("ArenaSize"); }
        uint32_t Seed() const { return ReadField<uint32_t>("Seed"); }
        void* DeathsSinceTick() const { return ReadField<void*>("DeathsSinceTick"); }
        void DeathsSinceTick(void* value) const { WriteField<void*>("DeathsSinceTick", value); }
        void* KillsByAttacker() const { return ReadField<void*>("KillsByAttacker"); }
        void KillsByAttacker(void* value) const { WriteField<void*>("KillsByAttacker", value); }
        void* RoutedThisStep() const { return ReadField<void*>("RoutedThisStep"); }
        void* Surrendered() const { return ReadField<void*>("Surrendered"); }
        void* RoutedPending() const { return ReadField<void*>("RoutedPending"); }
        void* SurrenderedPending() const { return ReadField<void*>("SurrenderedPending"); }
        void* RoutDeaths() const { return ReadField<void*>("RoutDeaths"); }
        void* PeakSurround() const { return ReadField<void*>("PeakSurround"); }
        void* RalliedThisStep() const { return ReadField<void*>("RalliedThisStep"); }
        int DeathsThisStep() const { return ReadField<int>("DeathsThisStep"); }
        void DeathsThisStep(int value) const { WriteField<int>("DeathsThisStep", value); }
        int ShotsThisStep() const { return ReadField<int>("ShotsThisStep"); }
        void ShotsThisStep(int value) const { WriteField<int>("ShotsThisStep", value); }
        int DotBatchSize() const { return ReadStaticField<int>("DotBatchSize"); }
    };
}
