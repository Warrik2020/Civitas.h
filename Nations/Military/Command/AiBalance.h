#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class AiBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "AiBalance") {}
    public:
        float SectorTiles() const { return ReadStaticField<float>("SectorTiles"); }
        int NormalWindow() const { return ReadStaticField<int>("NormalWindow"); }
        float ThreatTiles() const { return ReadStaticField<float>("ThreatTiles"); }
        float RoomMaxTiles() const { return ReadStaticField<float>("RoomMaxTiles"); }
        int DepthRows() const { return ReadStaticField<int>("DepthRows"); }
        int GroupSectors() const { return ReadStaticField<int>("GroupSectors"); }
        float ReserveBackTiles() const { return ReadStaticField<float>("ReserveBackTiles"); }
        int ReserveStands() const { return ReadStaticField<int>("ReserveStands"); }
        float RowBodies() const { return ReadStaticField<float>("RowBodies"); }
        float GuardMaxShare() const { return ReadStaticField<float>("GuardMaxShare"); }
        float StickRows() const { return ReadStaticField<float>("StickRows"); }
        float MatchTiles() const { return ReadStaticField<float>("MatchTiles"); }
        float SettleTiles() const { return ReadStaticField<float>("SettleTiles"); }
        int MinLoopStands() const { return ReadStaticField<int>("MinLoopStands"); }
        float PressStartOrg() const { return ReadStaticField<float>("PressStartOrg"); }
        float PressStopOrg() const { return ReadStaticField<float>("PressStopOrg"); }
        float KeepPressShare() const { return ReadStaticField<float>("KeepPressShare"); }
        float PushTiles() const { return ReadStaticField<float>("PushTiles"); }
        float JoinSlackTiles() const { return ReadStaticField<float>("JoinSlackTiles"); }
        float AimStepTiles() const { return ReadStaticField<float>("AimStepTiles"); }
        float CounterMaxOrg() const { return ReadStaticField<float>("CounterMaxOrg"); }
        float ObjectiveTiles() const { return ReadStaticField<float>("ObjectiveTiles"); }
        float ThrustSpacingTiles() const { return ReadStaticField<float>("ThrustSpacingTiles"); }
        int ThrustMinDivisions() const { return ReadStaticField<int>("ThrustMinDivisions"); }
        int ThrustMaxDivisions() const { return ReadStaticField<int>("ThrustMaxDivisions"); }
        int WedgeColumns() const { return ReadStaticField<int>("WedgeColumns"); }
        float ThrustStepTiles() const { return ReadStaticField<float>("ThrustStepTiles"); }
        float GatheredShare() const { return ReadStaticField<float>("GatheredShare"); }
        int PrepareTicks() const { return ReadStaticField<int>("PrepareTicks"); }
        int StallTicks() const { return ReadStaticField<int>("StallTicks"); }
        int CooldownTicks() const { return ReadStaticField<int>("CooldownTicks"); }
        float GainTiles() const { return ReadStaticField<float>("GainTiles"); }
        float FeasibilityCap() const { return ReadStaticField<float>("FeasibilityCap"); }
        int SalientTicks() const { return ReadStaticField<int>("SalientTicks"); }
        float PincerWeight() const { return ReadStaticField<float>("PincerWeight"); }
        float PincerRestTiles() const { return ReadStaticField<float>("PincerRestTiles"); }
        float FallbackTiles() const { return ReadStaticField<float>("FallbackTiles"); }
        float FallbackRoomShare() const { return ReadStaticField<float>("FallbackRoomShare"); }
        float HomeLean() const { return ReadStaticField<float>("HomeLean"); }
        int QuietTicks() const { return ReadStaticField<int>("QuietTicks"); }
        float ExposedRoomTiles() const { return ReadStaticField<float>("ExposedRoomTiles"); }
        float ExposedCapitalTiles() const { return ReadStaticField<float>("ExposedCapitalTiles"); }
        float CapitalThreatTiles() const { return ReadStaticField<float>("CapitalThreatTiles"); }
        int MaxThreatMarks() const { return ReadStaticField<int>("MaxThreatMarks"); }
    };
}
