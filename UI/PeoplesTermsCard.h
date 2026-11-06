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
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        void* KindBlock(int kind) const { void* args[] = { &kind }; return Call("KindBlock", args, 1); }
        void* KindHint(int kind) const { void* args[] = { &kind }; return Call("KindHint", args, 1); }
        void Seed(int kind) const { void* args[] = { &kind }; Call("Seed", args, 1); }
        void BuildControls(void* card, int kind) const { void* args[] = { card, &kind }; Call("BuildControls", args, 2); }
        void* StepHint() const { return Call("StepHint", nullptr, 0); }
        void* Title() const { return Call("Title", nullptr, 0); }
        void AppendDetail(void* sb) const { void* args[] = { sb }; Call("AppendDetail", args, 1); }
        void Tick(bool shown) const { void* args[] = { &shown }; Call("Tick", args, 1); }
        void AppendPutToPlayer(void* sb, void* terms, int landTiles, void* nations, void* identity) const { void* args[] = { sb, terms, &landTiles, nations, identity }; CallStatic("AppendPutToPlayer", args, 5); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        void* pill() const { return ReadField<void*>("pill"); }
        void SetPill(void* value) const { WriteField<void*>("pill", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
    };
}
