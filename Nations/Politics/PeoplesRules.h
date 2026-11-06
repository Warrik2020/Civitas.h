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
        float TiesFloor(void* f) const { void* args[] = { &f }; return CallValue<float>("TiesFloor", args, 1); }
        bool Eligible(void* w, int nation, int& group) const { void* args[] = { w, &nation, &group }; return CallValue<bool>("Eligible", args, 3); }
        bool Keep(void* w, void* r) const { void* args[] = { w, r }; return CallValue<bool>("Keep", args, 2); }
        void Targets(void* w, void* r, void* dst) const { void* args[] = { w, r, dst }; Call("Targets", args, 3); }
        bool StillTarget(void* w, void* r, int target) const { void* args[] = { w, r, &target }; return CallValue<bool>("StillTarget", args, 3); }
        float Relevance(void* w, void* r, int target) const { void* args[] = { w, r, &target }; return CallValue<float>("Relevance", args, 3); }
        void* TargetName(void* w, void* r, int target) const { void* args[] = { w, r, &target }; return Call("TargetName", args, 3); }
        void Facts(void* w, void* r, int target, void* f) const { void* args[] = { w, r, &target, &f }; Call("Facts", args, 4); }
        void Names(void* w, void* r, int target, void* f, void* n) const { void* args[] = { w, r, &target, &f, &n }; Call("Names", args, 5); }
        void InitBranch(void* w, void* r, void* b, void* old, void* f) const { void* args[] = { w, r, b, old, &f }; Call("InitBranch", args, 5); }
        bool Held(void* w, void* b) const { void* args[] = { w, b }; return CallStaticValue<bool>("Held", args, 2); }
        bool MoveMeter(void* w, void* r, void* b, void* f, float months) const { void* args[] = { w, r, b, &f, &months }; return CallValue<bool>("MoveMeter", args, 5); }
        float Drift(void* w, void* r, void* b, void* terms) const { void* args[] = { w, r, b, terms }; return CallValue<float>("Drift", args, 4); }
        void ReviewBranch(void* w, void* r, void* b, void* f, float months) const { void* args[] = { w, r, b, &f, &months }; Call("ReviewBranch", args, 5); }
        void OnStepDone(void* w, void* r, void* b, void* s) const { void* args[] = { w, r, b, s }; Call("OnStepDone", args, 4); }
        float Willing(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<float>("Willing", args, 3); }
        float BranchScore(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<float>("BranchScore", args, 3); }
        float AiAnswerChance(void* w, void* r, void* b, void* demand) const { void* args[] = { w, r, b, demand }; return CallValue<float>("AiAnswerChance", args, 4); }
        void AiConsider(void* w, int nation, float months) const { void* args[] = { w, &nation, &months }; Call("AiConsider", args, 3); }
        bool AiEnding(void* w, void* r, void* b, float months) const { void* args[] = { w, r, b, &months }; return CallValue<bool>("AiEnding", args, 4); }
        void* Intro(void* w, void* r) const { void* args[] = { w, r }; return Call("Intro", args, 2); }
        void* Empty(void* w, int nation) const { void* args[] = { w, &nation }; return Call("Empty", args, 2); }
    };
}
