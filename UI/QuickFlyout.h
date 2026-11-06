#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickFlyout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickFlyout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickFlyout") {}
    public:
        void Open(void* anchor, int menu, const char* title, void* ctx) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { anchor, &menu, managed_2, &ctx }; Call("Open", args, 4); }
        void Close() const { Call("Close", nullptr, 0); }
        void Refresh() const { Call("Refresh", nullptr, 0); }
        void Reposition() const { Call("Reposition", nullptr, 0); }
        void SetActive(bool on) const { void* args[] = { &on }; Call("SetActive", args, 1); }
        void Seed(void* ctx) const { void* args[] = { &ctx }; Call("Seed", args, 1); }
        void SetActive(bool on) const { void* args[] = { &on }; Call("SetActive", args, 1); }
        void Seed(void* ctx) const { void* args[] = { &ctx }; Call("Seed", args, 1); }
        void SetActive(bool on) const { void* args[] = { &on }; Call("SetActive", args, 1); }
        void Seed(void* ctx) const { void* args[] = { &ctx }; Call("Seed", args, 1); }
        void Refresh(void* ctx) const { void* args[] = { &ctx }; Call("Refresh", args, 1); }
    };
}
