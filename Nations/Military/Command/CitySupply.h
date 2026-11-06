#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CitySupply : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CitySupply(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CitySupply") {}
    public:
        void* CityAt(int i) const { void* __callArgs[] = { &i }; return CallStatic("CityAt", __callArgs, 1); }
        int TileOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("TileOf", __callArgs, 1); }
        int ControllerOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("ControllerOf", __callArgs, 1); }
        int ControlSinceOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("ControlSinceOf", __callArgs, 1); }
        float StockOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<float>("StockOf", __callArgs, 1); }
        int RoadLevelOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("RoadLevelOf", __callArgs, 1); }
        bool HubValid(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("HubValid", __callArgs, 1); }
        bool CutOff(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("CutOff", __callArgs, 1); }
        int KindOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("KindOf", __callArgs, 1); }
        int HubVersionOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("HubVersionOf", __callArgs, 1); }
        bool Judged(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("Judged", __callArgs, 1); }
        bool Feeds(int controller, int nationId) const { void* __callArgs[] = { &controller, &nationId }; return CallStaticValue<bool>("Feeds", __callArgs, 2); }
        int IndexOfId(int cityId) const { void* __callArgs[] = { &cityId }; return CallStaticValue<int>("IndexOfId", __callArgs, 1); }
        float OutputOf(int i, float techMul, int tick, void* terms) const { void* __callArgs[] = { &i, &techMul, &tick, &terms }; return CallStaticValue<float>("OutputOf", __callArgs, 4); }
        float MulOf(int i, int tick, float& blockMul) const { void* __callArgs[] = { &i, &tick, &blockMul }; return CallStaticValue<float>("MulOf", __callArgs, 3); }
        float RampOf(int controlSince, int tick) const { void* __callArgs[] = { &controlSince, &tick }; return CallStaticValue<float>("RampOf", __callArgs, 2); }
        void Sync(void* grid, void* cities, void* milById) const { void* __callArgs[] = { grid, cities, milById }; CallStatic("Sync", __callArgs, 3); }
        void OnCityRemoved(void* cities, int index) const { void* __callArgs[] = { cities, &index }; CallStatic("OnCityRemoved", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void NoteFlood(int nationId, void* conn, int version) const { void* __callArgs[] = { &nationId, conn, &version }; CallStatic("NoteFlood", __callArgs, 3); }
        void Tick(int tick, float ticksPerDay, void* milById) const { void* __callArgs[] = { &tick, &ticksPerDay, milById }; CallStatic("Tick", __callArgs, 3); }
        float CapitalMul() const { return ReadStaticField<float>("CapitalMul"); }
        float RoadMulPerLevel() const { return ReadStaticField<float>("RoadMulPerLevel"); }
        float CaptureRampStart() const { return ReadStaticField<float>("CaptureRampStart"); }
        int CaptureRampTicks() const { return ReadStaticField<int>("CaptureRampTicks"); }
        float OccupiedMul() const { return ReadStaticField<float>("OccupiedMul"); }
        float BlockadedMul() const { return ReadStaticField<float>("BlockadedMul"); }
        float FortressDays() const { return ReadStaticField<float>("FortressDays"); }
        float FortressRefillDays() const { return ReadStaticField<float>("FortressRefillDays"); }
    };
}
