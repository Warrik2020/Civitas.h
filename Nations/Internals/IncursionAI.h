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
        void Bind(void* mgr) const { void* args[] = { mgr }; CallStatic("Bind", args, 1); }
        void Forget(int nationId) const { void* args[] = { &nationId }; CallStatic("Forget", args, 1); }
        bool HasOrder(int v, int h) const { void* args[] = { &v, &h }; return CallStaticValue<bool>("HasOrder", args, 2); }
        void* OrderOf(int nationId) const { void* args[] = { &nationId }; return CallStatic("OrderOf", args, 1); }
        int IntentTarget(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("IntentTarget", args, 1); }
        bool StagedLongEnough(int nationId, int target, int tick) const { void* args[] = { &nationId, &target, &tick }; return CallStaticValue<bool>("StagedLongEnough", args, 3); }
        void Cancel(int v, int h) const { void* args[] = { &v, &h }; CallStatic("Cancel", args, 2); }
        void OnWar(int a, int b) const { void* args[] = { &a, &b }; CallStatic("OnWar", args, 2); }
        bool AnswerProtest(void* mgr, int v, int h) const { void* args[] = { mgr, &v, &h }; return CallStaticValue<bool>("AnswerProtest", args, 3); }
        bool AnswerExpel(void* mgr, int v, int h) const { void* args[] = { mgr, &v, &h }; return CallStaticValue<bool>("AnswerExpel", args, 3); }
        bool StagingWanted(void* mgr, int nationId, int target, int tick) const { void* args[] = { mgr, &nationId, &target, &tick }; return CallStaticValue<bool>("StagingWanted", args, 4); }
        bool GateOnStaging(int nationId, int target, int tick) const { void* args[] = { &nationId, &target, &tick }; return CallStaticValue<bool>("GateOnStaging", args, 3); }
        void OpenStage(void* mgr, int nationId, int target, int tick) const { void* args[] = { mgr, &nationId, &target, &tick }; CallStatic("OpenStage", args, 4); }
        bool CanPressLockdown(void* mgr, int claimant, int owner, int stateId, int tick) const { void* args[] = { mgr, &claimant, &owner, &stateId, &tick }; return CallStaticValue<bool>("CanPressLockdown", args, 5); }
        void RequestLockdown(void* mgr, int claimant, int owner, int stateId, int tick) const { void* args[] = { mgr, &claimant, &owner, &stateId, &tick }; CallStatic("RequestLockdown", args, 5); }
        int LockedTicks(int claimant, int stateId) const { void* args[] = { &claimant, &stateId }; return CallStaticValue<int>("LockedTicks", args, 2); }
        int OrderAge(int claimant) const { void* args[] = { &claimant }; return CallStaticValue<int>("OrderAge", args, 1); }
        void Evaluate(void* mgr, void* n, int tick, int interval) const { void* args[] = { mgr, n, &tick, &interval }; CallStatic("Evaluate", args, 4); }
        void Steer(void* mm, void* mil, void* n, void* grid, int tick) const { void* args[] = { mm, mil, n, grid, &tick }; CallStatic("Steer", args, 5); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int host() const { return ReadField<int>("host"); }
        void SetHost(int value) const { WriteField<int>("host", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        int wanted() const { return ReadField<int>("wanted"); }
        void SetWanted(int value) const { WriteField<int>("wanted", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
        int firstAbroadTick() const { return ReadField<int>("firstAbroadTick"); }
        void SetFirstAbroadTick(int value) const { WriteField<int>("firstAbroadTick", value); }
        int lockedTicks() const { return ReadField<int>("lockedTicks"); }
        void SetLockedTicks(int value) const { WriteField<int>("lockedTicks", value); }
        int ageTicks() const { return ReadField<int>("ageTicks"); }
        void SetAgeTicks(int value) const { WriteField<int>("ageTicks", value); }
    };
}
