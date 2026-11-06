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
        void* Of(int nation) const { void* __callArgs[] = { &nation }; return CallStatic("Of", __callArgs, 1); }
        int Earned(int nation, int k) const { void* __callArgs[] = { &nation, &k }; return CallStaticValue<int>("Earned", __callArgs, 2); }
        void* EarnedOf(int nation) const { void* __callArgs[] = { &nation }; return CallStatic("EarnedOf", __callArgs, 1); }
        bool AnyEarned(int nation) const { void* __callArgs[] = { &nation }; return CallStaticValue<bool>("AnyEarned", __callArgs, 1); }
        void EarnedNations(void* dst) const { void* __callArgs[] = { dst }; CallStatic("EarnedNations", __callArgs, 1); }
        void HistoryOf(int nation, void* dst) const { void* __callArgs[] = { &nation, dst }; CallStatic("HistoryOf", __callArgs, 2); }
        void Set(int nation, void* g) const { void* __callArgs[] = { &nation, g }; CallStatic("Set", __callArgs, 2); }
        void Drop(int nation) const { void* __callArgs[] = { &nation }; CallStatic("Drop", __callArgs, 1); }
        void* Complete(int nation, int year) const { void* __callArgs[] = { &nation, &year }; return CallStatic("Complete", __callArgs, 2); }
        void OnEliminated(int nation) const { void* __callArgs[] = { &nation }; CallStatic("OnEliminated", __callArgs, 1); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        bool TryModifiers(int nation, void* m) const { void* __callArgs[] = { &nation, &m }; return CallStaticValue<bool>("TryModifiers", __callArgs, 2); }
        float WarRollMul(int self, int other) const { void* __callArgs[] = { &self, &other }; return CallStaticValue<float>("WarRollMul", __callArgs, 2); }
        bool AimedAt(int nation, int other) const { void* __callArgs[] = { &nation, &other }; return CallStaticValue<bool>("AimedAt", __callArgs, 2); }
        void AimedAtBy(int nation, void* dst) const { void* __callArgs[] = { &nation, dst }; CallStatic("AimedAtBy", __callArgs, 2); }
        void NoteRevolt(int nation, int tick) const { void* __callArgs[] = { &nation, &tick }; CallStatic("NoteRevolt", __callArgs, 2); }
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void Restore(void* s) const { void* __callArgs[] = { &s }; CallStatic("Restore", __callArgs, 1); }
        int HistoryPerNation() const { return ReadStaticField<int>("HistoryPerNation"); }
        float DestroyWarMul() const { return ReadStaticField<float>("DestroyWarMul"); }
        float ReuniteWarMul() const { return ReadStaticField<float>("ReuniteWarMul"); }
    };
}
