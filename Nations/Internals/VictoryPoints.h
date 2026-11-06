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
        int Of(int i) const { void* args[] = { &i }; return CallStaticValue<int>("Of", args, 1); }
        int OfId(int cityId) const { void* args[] = { &cityId }; return CallStaticValue<int>("OfId", args, 1); }
        bool FrozenAt(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("FrozenAt", args, 1); }
        int TotalOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("TotalOf", args, 1); }
        int LostOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("LostOf", args, 1); }
        int CreditToAt(int i) const { void* args[] = { &i }; return CallStaticValue<int>("CreditToAt", args, 1); }
        float CreditAt(int i) const { void* args[] = { &i }; return CallStaticValue<float>("CreditAt", args, 1); }
        int IndexOfId(int cityId) const { void* args[] = { &cityId }; return CallStaticValue<int>("IndexOfId", args, 1); }
        int Formula(float people) const { void* args[] = { &people }; return CallStaticValue<int>("Formula", args, 1); }
        int Compute(void* c, bool largestInState) const { void* args[] = { c, &largestInState }; return CallStaticValue<int>("Compute", args, 2); }
        int ControllerOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("ControllerOf", args, 1); }
        int HeldBy(int owner, int holder) const { void* args[] = { &owner, &holder }; return CallStaticValue<int>("HeldBy", args, 2); }
        void Refresh(void* grid, void* cities, int tick, void* ownerAtWar, void* atWarWith) const { void* args[] = { grid, cities, &tick, ownerAtWar, atWarWith }; CallStatic("Refresh", args, 5); }
        void OnCityRemoved(void* cities, int index) const { void* args[] = { cities, &index }; CallStatic("OnCityRemoved", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void OnControlChanged(int cityId, int from, int to, void* grid, void* cities, void* relationOf, float clamp) const { void* args[] = { &cityId, &from, &to, grid, cities, relationOf, &clamp }; CallStatic("OnControlChanged", args, 7); }
        void FillObjectives(void* goal, int fromId, int tick) const { void* args[] = { goal, &fromId, &tick }; CallStatic("FillObjectives", args, 3); }
        void Capture(void* tiles, void* rows) const { void* args[] = { tiles, rows }; CallStatic("Capture", args, 2); }
        void Restore(void* tiles, void* rows) const { void* args[] = { tiles, rows }; CallStatic("Restore", args, 2); }
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
        int vp() const { return ReadField<int>("vp"); }
        void SetVp(int value) const { WriteField<int>("vp", value); }
        int creditTo() const { return ReadField<int>("creditTo"); }
        void SetCreditTo(int value) const { WriteField<int>("creditTo", value); }
        float credit() const { return ReadField<float>("credit"); }
        void SetCredit(float value) const { WriteField<float>("credit", value); }
    };
}
