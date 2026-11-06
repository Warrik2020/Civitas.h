#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class IncursionAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IncursionAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "IncursionAI") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Bind(void* mgr) const { void* __callArgs[] = { mgr }; CallStatic("Bind", __callArgs, 1); }
        void Forget(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("Forget", __callArgs, 1); }
        bool HasOrder(int v, int h) const { void* __callArgs[] = { &v, &h }; return CallStaticValue<bool>("HasOrder", __callArgs, 2); }
        void* OrderOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("OrderOf", __callArgs, 1); }
        int IntentTarget(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("IntentTarget", __callArgs, 1); }
        bool StagedLongEnough(int nationId, int target, int tick) const { void* __callArgs[] = { &nationId, &target, &tick }; return CallStaticValue<bool>("StagedLongEnough", __callArgs, 3); }
        void Cancel(int v, int h) const { void* __callArgs[] = { &v, &h }; CallStatic("Cancel", __callArgs, 2); }
        void OnWar(int a, int b) const { void* __callArgs[] = { &a, &b }; CallStatic("OnWar", __callArgs, 2); }
        bool AnswerProtest(void* mgr, int v, int h) const { void* __callArgs[] = { mgr, &v, &h }; return CallStaticValue<bool>("AnswerProtest", __callArgs, 3); }
        bool AnswerExpel(void* mgr, int v, int h) const { void* __callArgs[] = { mgr, &v, &h }; return CallStaticValue<bool>("AnswerExpel", __callArgs, 3); }
        bool StagingWanted(void* mgr, int nationId, int target, int tick) const { void* __callArgs[] = { mgr, &nationId, &target, &tick }; return CallStaticValue<bool>("StagingWanted", __callArgs, 4); }
        bool GateOnStaging(int nationId, int target, int tick) const { void* __callArgs[] = { &nationId, &target, &tick }; return CallStaticValue<bool>("GateOnStaging", __callArgs, 3); }
        void OpenStage(void* mgr, int nationId, int target, int tick) const { void* __callArgs[] = { mgr, &nationId, &target, &tick }; CallStatic("OpenStage", __callArgs, 4); }
        bool CanPressLockdown(void* mgr, int claimant, int owner, int stateId, int tick) const { void* __callArgs[] = { mgr, &claimant, &owner, &stateId, &tick }; return CallStaticValue<bool>("CanPressLockdown", __callArgs, 5); }
        void RequestLockdown(void* mgr, int claimant, int owner, int stateId, int tick) const { void* __callArgs[] = { mgr, &claimant, &owner, &stateId, &tick }; CallStatic("RequestLockdown", __callArgs, 5); }
        int LockedTicks(int claimant, int stateId) const { void* __callArgs[] = { &claimant, &stateId }; return CallStaticValue<int>("LockedTicks", __callArgs, 2); }
        int OrderAge(int claimant) const { void* __callArgs[] = { &claimant }; return CallStaticValue<int>("OrderAge", __callArgs, 1); }
        void Evaluate(void* mgr, void* n, int tick, int interval) const { void* __callArgs[] = { mgr, n, &tick, &interval }; CallStatic("Evaluate", __callArgs, 4); }
        void Steer(void* mm, void* mil, void* n, void* grid, int tick) const { void* __callArgs[] = { mm, mil, n, grid, &tick }; CallStatic("Steer", __callArgs, 5); }
    };
}
