#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalTracker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalTracker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalTracker") {}
    public:
        void AcknowledgeEnd() const { CallStatic("AcknowledgeEnd", nullptr, 0); }
        void AcknowledgeCard() const { CallStatic("AcknowledgeCard", nullptr, 0); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Refold(void* nations) const { void* args[] = { nations }; CallStatic("Refold", args, 1); }
        void Options(int nation, void* dst) const { void* args[] = { &nation, dst }; CallStatic("Options", args, 2); }
        bool Choose(int nation, void* o) const { void* args[] = { &nation, &o }; return CallStaticValue<bool>("Choose", args, 2); }
        void Abandon(int nation) const { void* args[] = { &nation }; CallStatic("Abandon", args, 1); }
        void Refresh(int nation) const { void* args[] = { &nation }; CallStatic("Refresh", args, 1); }
        void AimWarGoal(void* self, void* it, int enemy) const { void* args[] = { self, it, &enemy }; CallStatic("AimWarGoal", args, 3); }
    };
}
