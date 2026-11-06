#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPager") {}
    public:
        void Window(int count, int& from, int& to) const { void* args[] = { &count, &from, &to }; Call("Window", args, 3); }
        void ShowItem(int index) const { void* args[] = { &index }; Call("ShowItem", args, 1); }
        void Reset() const { Call("Reset", nullptr, 0); }
        void SetPerPage(int perPage) const { void* args[] = { &perPage }; Call("SetPerPage", args, 1); }
        void* Root() const { return ReadField<void*>("Root"); }
        bool KeepHeight() const { return ReadField<bool>("KeepHeight"); }
        void SetKeepHeight(bool value) const { WriteField<bool>("KeepHeight", value); }
    };
}
