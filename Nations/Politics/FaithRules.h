#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class FaithRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FaithRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "FaithRules") {}
    public:
        bool Eligible(void* w, int nation, int& group) const { void* __callArgs[] = { w, &nation, &group }; return CallValue<bool>("Eligible", __callArgs, 3); }
        void Targets(void* w, void* r, void* dst) const { void* __callArgs[] = { w, r, dst }; Call("Targets", __callArgs, 3); }
        bool StillTarget(void* w, void* r, int target) const { void* __callArgs[] = { w, r, &target }; return CallValue<bool>("StillTarget", __callArgs, 3); }
        void Facts(void* w, void* r, int target, void* f) const { void* __callArgs[] = { w, r, &target, &f }; Call("Facts", __callArgs, 4); }
        float Willing(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<float>("Willing", __callArgs, 3); }
        void ReviewBranch(void* w, void* r, void* b, void* f, float months) const { void* __callArgs[] = { w, r, b, &f, &months }; Call("ReviewBranch", __callArgs, 5); }
        void AiConsider(void* w, int nation, float months) const { void* __callArgs[] = { w, &nation, &months }; Call("AiConsider", __callArgs, 3); }
        bool AiEnding(void* w, void* r, void* b, float months) const { void* __callArgs[] = { w, r, b, &months }; return CallValue<bool>("AiEnding", __callArgs, 4); }
        void* Intro(void* w, void* r) const { void* __callArgs[] = { w, r }; return Call("Intro", __callArgs, 2); }
        void* Empty(void* w, int nation) const { void* __callArgs[] = { w, &nation }; return Call("Empty", __callArgs, 2); }
    };
}
