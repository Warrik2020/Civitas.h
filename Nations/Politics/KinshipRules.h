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
        float BranchScore(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<float>("BranchScore", args, 3); }
        void Scopes(void* w, int people, void* dst) const { void* args[] = { w, &people, dst }; Call("Scopes", args, 3); }
        int TargetCount(void* w, int nation, int group) const { void* args[] = { w, &nation, &group }; return CallValue<int>("TargetCount", args, 3); }
        void* ScopeLabel(void* w, int group, int people) const { void* args[] = { w, &group, &people }; return Call("ScopeLabel", args, 3); }
        void* CauseName(void* w, int group, int people) const { void* args[] = { w, &group, &people }; return Call("CauseName", args, 3); }
        void* BranchTitle(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return Call("BranchTitle", args, 3); }
        bool Eligible(void* w, int nation, int& group) const { void* args[] = { w, &nation, &group }; return CallValue<bool>("Eligible", args, 3); }
        bool Keep(void* w, void* r) const { void* args[] = { w, r }; return CallValue<bool>("Keep", args, 2); }
        bool SameRace(void* r, void* o) const { void* args[] = { r, o }; return CallValue<bool>("SameRace", args, 2); }
        bool IsKin(void* w, void* r, int judge) const { void* args[] = { w, r, &judge }; return CallValue<bool>("IsKin", args, 3); }
        void Targets(void* w, void* r, void* dst) const { void* args[] = { w, r, dst }; Call("Targets", args, 3); }
        float Relevance(void* w, void* r, int target) const { void* args[] = { w, r, &target }; return CallValue<float>("Relevance", args, 3); }
        bool StillTarget(void* w, void* r, int target) const { void* args[] = { w, r, &target }; return CallValue<bool>("StillTarget", args, 3); }
        void Facts(void* w, void* r, int target, void* f) const { void* args[] = { w, r, &target, &f }; Call("Facts", args, 4); }
        void Names(void* w, void* r, int target, void* f, void* n) const { void* args[] = { w, r, &target, &f, &n }; Call("Names", args, 5); }
        float TiesFloor(void* f) const { void* args[] = { &f }; return CallValue<float>("TiesFloor", args, 1); }
        void InitBranch(void* w, void* r, void* b, void* old, void* f) const { void* args[] = { w, r, b, old, &f }; Call("InitBranch", args, 5); }
        float Willing(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<float>("Willing", args, 3); }
        bool HasCause(void* r, void* b, int now) const { void* args[] = { r, b, &now }; return CallValue<bool>("HasCause", args, 3); }
        int RisingStateFor(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<int>("RisingStateFor", args, 3); }
        void ReviewBranch(void* w, void* r, void* b, void* f, float months) const { void* args[] = { w, r, b, &f, &months }; Call("ReviewBranch", args, 5); }
        void OnStepDone(void* w, void* r, void* b, void* s) const { void* args[] = { w, r, b, s }; Call("OnStepDone", args, 4); }
        void OnFreed(void* w, void* r, int lord, int newState, int people) const { void* args[] = { w, r, &lord, &newState, &people }; Call("OnFreed", args, 5); }
        void AiConsider(void* w, int nation, float months) const { void* args[] = { w, &nation, &months }; Call("AiConsider", args, 3); }
        bool AiEnding(void* w, void* r, void* b, float months) const { void* args[] = { w, r, b, &months }; return CallValue<bool>("AiEnding", args, 4); }
        void* Intro(void* w, void* r) const { void* args[] = { w, r }; return Call("Intro", args, 2); }
        void* Empty(void* w, int nation) const { void* args[] = { w, &nation }; return Call("Empty", args, 2); }
    };
}
