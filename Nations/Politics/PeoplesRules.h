#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PeoplesRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PeoplesRules") {}
    public:
        float TiesFloor(void* f) const { void* __callArgs[] = { &f }; return CallValue<float>("TiesFloor", __callArgs, 1); }
        bool Eligible(void* w, int nation, int& group) const { void* __callArgs[] = { w, &nation, &group }; return CallValue<bool>("Eligible", __callArgs, 3); }
        bool Keep(void* w, void* r) const { void* __callArgs[] = { w, r }; return CallValue<bool>("Keep", __callArgs, 2); }
        void Targets(void* w, void* r, void* dst) const { void* __callArgs[] = { w, r, dst }; Call("Targets", __callArgs, 3); }
        bool StillTarget(void* w, void* r, int target) const { void* __callArgs[] = { w, r, &target }; return CallValue<bool>("StillTarget", __callArgs, 3); }
        float Relevance(void* w, void* r, int target) const { void* __callArgs[] = { w, r, &target }; return CallValue<float>("Relevance", __callArgs, 3); }
        void* TargetName(void* w, void* r, int target) const { void* __callArgs[] = { w, r, &target }; return Call("TargetName", __callArgs, 3); }
        void Facts(void* w, void* r, int target, void* f) const { void* __callArgs[] = { w, r, &target, &f }; Call("Facts", __callArgs, 4); }
        void Names(void* w, void* r, int target, void* f, void* n) const { void* __callArgs[] = { w, r, &target, &f, &n }; Call("Names", __callArgs, 5); }
        void InitBranch(void* w, void* r, void* b, void* old, void* f) const { void* __callArgs[] = { w, r, b, old, &f }; Call("InitBranch", __callArgs, 5); }
        bool Held(void* w, void* b) const { void* __callArgs[] = { w, b }; return CallStaticValue<bool>("Held", __callArgs, 2); }
        bool MoveMeter(void* w, void* r, void* b, void* f, float months) const { void* __callArgs[] = { w, r, b, &f, &months }; return CallValue<bool>("MoveMeter", __callArgs, 5); }
        float Drift(void* w, void* r, void* b, void* terms) const { void* __callArgs[] = { w, r, b, terms }; return CallValue<float>("Drift", __callArgs, 4); }
        void ReviewBranch(void* w, void* r, void* b, void* f, float months) const { void* __callArgs[] = { w, r, b, &f, &months }; Call("ReviewBranch", __callArgs, 5); }
        void OnStepDone(void* w, void* r, void* b, void* s) const { void* __callArgs[] = { w, r, b, s }; Call("OnStepDone", __callArgs, 4); }
        float Willing(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<float>("Willing", __callArgs, 3); }
        float BranchScore(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<float>("BranchScore", __callArgs, 3); }
        float AiAnswerChance(void* w, void* r, void* b, void* demand) const { void* __callArgs[] = { w, r, b, demand }; return CallValue<float>("AiAnswerChance", __callArgs, 4); }
        void AiConsider(void* w, int nation, float months) const { void* __callArgs[] = { w, &nation, &months }; Call("AiConsider", __callArgs, 3); }
        bool AiEnding(void* w, void* r, void* b, float months) const { void* __callArgs[] = { w, r, b, &months }; return CallValue<bool>("AiEnding", __callArgs, 4); }
        void* Intro(void* w, void* r) const { void* __callArgs[] = { w, r }; return Call("Intro", __callArgs, 2); }
        void* Empty(void* w, int nation) const { void* __callArgs[] = { w, &nation }; return Call("Empty", __callArgs, 2); }
    };
}
