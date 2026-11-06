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
        void* CityAt(int i) const { void* args[] = { &i }; return CallStatic("CityAt", args, 1); }
        int TileOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("TileOf", args, 1); }
        int ControllerOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("ControllerOf", args, 1); }
        int ControlSinceOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("ControlSinceOf", args, 1); }
        float StockOf(int i) const { void* args[] = { &i }; return CallStaticValue<float>("StockOf", args, 1); }
        int RoadLevelOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("RoadLevelOf", args, 1); }
        bool HubValid(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("HubValid", args, 1); }
        bool CutOff(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("CutOff", args, 1); }
        int KindOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("KindOf", args, 1); }
        int HubVersionOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("HubVersionOf", args, 1); }
        bool Judged(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("Judged", args, 1); }
        bool Feeds(int controller, int nationId) const { void* args[] = { &controller, &nationId }; return CallStaticValue<bool>("Feeds", args, 2); }
        int IndexOfId(int cityId) const { void* args[] = { &cityId }; return CallStaticValue<int>("IndexOfId", args, 1); }
        float OutputOf(int i, float techMul, int tick, void* terms) const { void* args[] = { &i, &techMul, &tick, &terms }; return CallStaticValue<float>("OutputOf", args, 4); }
        float MulOf(int i, int tick, float& blockMul) const { void* args[] = { &i, &tick, &blockMul }; return CallStaticValue<float>("MulOf", args, 3); }
        float RampOf(int controlSince, int tick) const { void* args[] = { &controlSince, &tick }; return CallStaticValue<float>("RampOf", args, 2); }
        void Sync(void* grid, void* cities, void* milById) const { void* args[] = { grid, cities, milById }; CallStatic("Sync", args, 3); }
        void OnCityRemoved(void* cities, int index) const { void* args[] = { cities, &index }; CallStatic("OnCityRemoved", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void NoteFlood(int nationId, void* conn, int version) const { void* args[] = { &nationId, conn, &version }; CallStatic("NoteFlood", args, 3); }
        void Tick(int tick, float ticksPerDay, void* milById) const { void* args[] = { &tick, &ticksPerDay, milById }; CallStatic("Tick", args, 3); }
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
