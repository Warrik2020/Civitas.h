#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class KinshipRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KinshipRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "KinshipRules") {}
    public:
        float BranchScore(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<float>("BranchScore", __callArgs, 3); }
        void Scopes(void* w, int people, void* dst) const { void* __callArgs[] = { w, &people, dst }; Call("Scopes", __callArgs, 3); }
        int TargetCount(void* w, int nation, int group) const { void* __callArgs[] = { w, &nation, &group }; return CallValue<int>("TargetCount", __callArgs, 3); }
        void* ScopeLabel(void* w, int group, int people) const { void* __callArgs[] = { w, &group, &people }; return Call("ScopeLabel", __callArgs, 3); }
        void* CauseName(void* w, int group, int people) const { void* __callArgs[] = { w, &group, &people }; return Call("CauseName", __callArgs, 3); }
        void* BranchTitle(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return Call("BranchTitle", __callArgs, 3); }
        bool Eligible(void* w, int nation, int& group) const { void* __callArgs[] = { w, &nation, &group }; return CallValue<bool>("Eligible", __callArgs, 3); }
        bool Keep(void* w, void* r) const { void* __callArgs[] = { w, r }; return CallValue<bool>("Keep", __callArgs, 2); }
        bool SameRace(void* r, void* o) const { void* __callArgs[] = { r, o }; return CallValue<bool>("SameRace", __callArgs, 2); }
        bool IsKin(void* w, void* r, int judge) const { void* __callArgs[] = { w, r, &judge }; return CallValue<bool>("IsKin", __callArgs, 3); }
        void Targets(void* w, void* r, void* dst) const { void* __callArgs[] = { w, r, dst }; Call("Targets", __callArgs, 3); }
        float Relevance(void* w, void* r, int target) const { void* __callArgs[] = { w, r, &target }; return CallValue<float>("Relevance", __callArgs, 3); }
        bool StillTarget(void* w, void* r, int target) const { void* __callArgs[] = { w, r, &target }; return CallValue<bool>("StillTarget", __callArgs, 3); }
        void Facts(void* w, void* r, int target, void* f) const { void* __callArgs[] = { w, r, &target, &f }; Call("Facts", __callArgs, 4); }
        void Names(void* w, void* r, int target, void* f, void* n) const { void* __callArgs[] = { w, r, &target, &f, &n }; Call("Names", __callArgs, 5); }
        float TiesFloor(void* f) const { void* __callArgs[] = { &f }; return CallValue<float>("TiesFloor", __callArgs, 1); }
        void InitBranch(void* w, void* r, void* b, void* old, void* f) const { void* __callArgs[] = { w, r, b, old, &f }; Call("InitBranch", __callArgs, 5); }
        float Willing(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<float>("Willing", __callArgs, 3); }
        bool HasCause(void* r, void* b, int now) const { void* __callArgs[] = { r, b, &now }; return CallValue<bool>("HasCause", __callArgs, 3); }
        int RisingStateFor(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<int>("RisingStateFor", __callArgs, 3); }
        void ReviewBranch(void* w, void* r, void* b, void* f, float months) const { void* __callArgs[] = { w, r, b, &f, &months }; Call("ReviewBranch", __callArgs, 5); }
        void OnStepDone(void* w, void* r, void* b, void* s) const { void* __callArgs[] = { w, r, b, s }; Call("OnStepDone", __callArgs, 4); }
        void OnFreed(void* w, void* r, int lord, int newState, int people) const { void* __callArgs[] = { w, r, &lord, &newState, &people }; Call("OnFreed", __callArgs, 5); }
        void AiConsider(void* w, int nation, float months) const { void* __callArgs[] = { w, &nation, &months }; Call("AiConsider", __callArgs, 3); }
        bool AiEnding(void* w, void* r, void* b, float months) const { void* __callArgs[] = { w, r, b, &months }; return CallValue<bool>("AiEnding", __callArgs, 4); }
        void* Intro(void* w, void* r) const { void* __callArgs[] = { w, r }; return Call("Intro", __callArgs, 2); }
        void* Empty(void* w, int nation) const { void* __callArgs[] = { w, &nation }; return Call("Empty", __callArgs, 2); }
    };
}
