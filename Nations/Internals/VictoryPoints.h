#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class VictoryPoints : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VictoryPoints(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "VictoryPoints") {}
    public:
        int Of(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("Of", __callArgs, 1); }
        int OfId(int cityId) const { void* __callArgs[] = { &cityId }; return CallStaticValue<int>("OfId", __callArgs, 1); }
        bool FrozenAt(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("FrozenAt", __callArgs, 1); }
        int TotalOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("TotalOf", __callArgs, 1); }
        int LostOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("LostOf", __callArgs, 1); }
        int CreditToAt(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("CreditToAt", __callArgs, 1); }
        float CreditAt(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<float>("CreditAt", __callArgs, 1); }
        int IndexOfId(int cityId) const { void* __callArgs[] = { &cityId }; return CallStaticValue<int>("IndexOfId", __callArgs, 1); }
        int Formula(float people) const { void* __callArgs[] = { &people }; return CallStaticValue<int>("Formula", __callArgs, 1); }
        int Compute(void* c, bool largestInState) const { void* __callArgs[] = { c, &largestInState }; return CallStaticValue<int>("Compute", __callArgs, 2); }
        int ControllerOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("ControllerOf", __callArgs, 1); }
        int HeldBy(int owner, int holder) const { void* __callArgs[] = { &owner, &holder }; return CallStaticValue<int>("HeldBy", __callArgs, 2); }
        void Refresh(void* grid, void* cities, int tick, void* ownerAtWar, void* atWarWith) const { void* __callArgs[] = { grid, cities, &tick, ownerAtWar, atWarWith }; CallStatic("Refresh", __callArgs, 5); }
        void OnCityRemoved(void* cities, int index) const { void* __callArgs[] = { cities, &index }; CallStatic("OnCityRemoved", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void OnControlChanged(int cityId, int from, int to, void* grid, void* cities, void* relationOf, float clamp) const { void* __callArgs[] = { &cityId, &from, &to, grid, cities, relationOf, &clamp }; CallStatic("OnControlChanged", __callArgs, 7); }
        void FillObjectives(void* goal, int fromId, int tick) const { void* __callArgs[] = { goal, &fromId, &tick }; CallStatic("FillObjectives", __callArgs, 3); }
        void Capture(void* tiles, void* rows) const { void* __callArgs[] = { tiles, rows }; CallStatic("Capture", __callArgs, 2); }
        void Restore(void* tiles, void* rows) const { void* __callArgs[] = { tiles, rows }; CallStatic("Restore", __callArgs, 2); }
        int MinVp() const { return ReadStaticField<int>("MinVp"); }
        int MaxVp() const { return ReadStaticField<int>("MaxVp"); }
        int CapitalMinVp() const { return ReadStaticField<int>("CapitalMinVp"); }
        int StateLargestBonus() const { return ReadStaticField<int>("StateLargestBonus"); }
        float PeoplePerStep() const { return ReadStaticField<float>("PeoplePerStep"); }
        float SqrtWeight() const { return ReadStaticField<float>("SqrtWeight"); }
        float WarScorePerVp() const { return ReadStaticField<float>("WarScorePerVp"); }
        int LiveRefreshTicks() const { return ReadStaticField<int>("LiveRefreshTicks"); }
        int ObjectiveCities() const { return ReadStaticField<int>("ObjectiveCities"); }
        int ObjectiveBorderTiles() const { return ReadStaticField<int>("ObjectiveBorderTiles"); }
        int ObjectiveRefreshTicks() const { return ReadStaticField<int>("ObjectiveRefreshTicks"); }
    };
}
