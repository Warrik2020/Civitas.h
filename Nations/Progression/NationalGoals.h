#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class NationalGoals : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationalGoals(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "NationalGoals") {}
    public:
        void* Of(int nation) const { void* args[] = { &nation }; return CallStatic("Of", args, 1); }
        int Earned(int nation, int k) const { void* args[] = { &nation, &k }; return CallStaticValue<int>("Earned", args, 2); }
        void* EarnedOf(int nation) const { void* args[] = { &nation }; return CallStatic("EarnedOf", args, 1); }
        bool AnyEarned(int nation) const { void* args[] = { &nation }; return CallStaticValue<bool>("AnyEarned", args, 1); }
        void EarnedNations(void* dst) const { void* args[] = { dst }; CallStatic("EarnedNations", args, 1); }
        void HistoryOf(int nation, void* dst) const { void* args[] = { &nation, dst }; CallStatic("HistoryOf", args, 2); }
        void Set(int nation, void* g) const { void* args[] = { &nation, g }; CallStatic("Set", args, 2); }
        void Drop(int nation) const { void* args[] = { &nation }; CallStatic("Drop", args, 1); }
        void* Complete(int nation, int year) const { void* args[] = { &nation, &year }; return CallStatic("Complete", args, 2); }
        void OnEliminated(int nation) const { void* args[] = { &nation }; CallStatic("OnEliminated", args, 1); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        bool TryModifiers(int nation, void* m) const { void* args[] = { &nation, &m }; return CallStaticValue<bool>("TryModifiers", args, 2); }
        float WarRollMul(int self, int other) const { void* args[] = { &self, &other }; return CallStaticValue<float>("WarRollMul", args, 2); }
        bool AimedAt(int nation, int other) const { void* args[] = { &nation, &other }; return CallStaticValue<bool>("AimedAt", args, 2); }
        void AimedAtBy(int nation, void* dst) const { void* args[] = { &nation, dst }; CallStatic("AimedAtBy", args, 2); }
        void NoteRevolt(int nation, int tick) const { void* args[] = { &nation, &tick }; CallStatic("NoteRevolt", args, 2); }
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Restore(void* s) const { void* args[] = { &s }; CallStatic("Restore", args, 1); }
        int HistoryPerNation() const { return ReadStaticField<int>("HistoryPerNation"); }
        float DestroyWarMul() const { return ReadStaticField<float>("DestroyWarMul"); }
        float ReuniteWarMul() const { return ReadStaticField<float>("ReuniteWarMul"); }
        void* goals() const { return ReadField<void*>("goals"); }
        void SetGoals(void* value) const { WriteField<void*>("goals", value); }
        void* goalNations() const { return ReadField<void*>("goalNations"); }
        void SetGoalNations(void* value) const { WriteField<void*>("goalNations", value); }
        void* earnedNations() const { return ReadField<void*>("earnedNations"); }
        void SetEarnedNations(void* value) const { WriteField<void*>("earnedNations", value); }
        void* earned() const { return ReadField<void*>("earned"); }
        void SetEarned(void* value) const { WriteField<void*>("earned", value); }
        void* history() const { return ReadField<void*>("history"); }
        void SetHistory(void* value) const { WriteField<void*>("history", value); }
    };
}
