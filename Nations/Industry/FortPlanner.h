#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class FortPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FortPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "FortPlanner") {}
    public:
        void ScoreBorder(void* g, void* mil, bool atWar, void* into) const { void* args[] = { g, mil, &atWar, into }; CallStatic("ScoreBorder", args, 4); }
        void ScoreMarks(void* g, int self, void* marks, int tick, void* into) const { void* args[] = { g, &self, marks, &tick, into }; CallStatic("ScoreMarks", args, 5); }
        int Pick(void* scores, void* ok) const { void* args[] = { scores, ok }; return CallStaticValue<int>("Pick", args, 2); }
        float MarkWeight() const { return ReadStaticField<float>("MarkWeight"); }
        int MarkMaxAgeTicks() const { return ReadStaticField<int>("MarkMaxAgeTicks"); }
    };
}
