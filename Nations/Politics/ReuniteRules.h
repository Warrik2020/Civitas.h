#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class ReuniteRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ReuniteRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "ReuniteRules") {}
    public:
        bool Eligible(void* w, int nation, int& group) const { void* args[] = { w, &nation, &group }; return CallValue<bool>("Eligible", args, 3); }
        void Targets(void* w, void* r, void* dst) const { void* args[] = { w, r, dst }; Call("Targets", args, 3); }
        bool StillTarget(void* w, void* r, int target) const { void* args[] = { w, r, &target }; return CallValue<bool>("StillTarget", args, 3); }
        void ReviewBranch(void* w, void* r, void* b, void* f, float months) const { void* args[] = { w, r, b, &f, &months }; Call("ReviewBranch", args, 5); }
        float Willing(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<float>("Willing", args, 3); }
        bool HasCause(void* r, void* b, int now) const { void* args[] = { r, b, &now }; return CallValue<bool>("HasCause", args, 3); }
        void AiConsider(void* w, int nation, float months) const { void* args[] = { w, &nation, &months }; Call("AiConsider", args, 3); }
        bool AiEnding(void* w, void* r, void* b, float months) const { void* args[] = { w, r, b, &months }; return CallValue<bool>("AiEnding", args, 4); }
        void* Intro(void* w, void* r) const { void* args[] = { w, r }; return Call("Intro", args, 2); }
        void* Empty(void* w, int nation) const { void* args[] = { w, &nation }; return Call("Empty", args, 2); }
    };
}
