#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesTermsCard : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesTermsCard(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesTermsCard") {}
    public:
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        void* KindBlock(int kind) const { void* __callArgs[] = { &kind }; return Call("KindBlock", __callArgs, 1); }
        void* KindHint(int kind) const { void* __callArgs[] = { &kind }; return Call("KindHint", __callArgs, 1); }
        void Seed(int kind) const { void* __callArgs[] = { &kind }; Call("Seed", __callArgs, 1); }
        void BuildControls(void* card, int kind) const { void* __callArgs[] = { card, &kind }; Call("BuildControls", __callArgs, 2); }
        void* StepHint() const { return Call("StepHint", nullptr, 0); }
        void* Title() const { return Call("Title", nullptr, 0); }
        void AppendDetail(void* sb) const { void* __callArgs[] = { sb }; Call("AppendDetail", __callArgs, 1); }
        void Tick(bool shown) const { void* __callArgs[] = { &shown }; Call("Tick", __callArgs, 1); }
        void AppendPutToPlayer(void* sb, void* terms, int landTiles, void* nations, void* identity) const { void* __callArgs[] = { sb, terms, &landTiles, nations, identity }; CallStatic("AppendPutToPlayer", __callArgs, 5); }
    };
}
