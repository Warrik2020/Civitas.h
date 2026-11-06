#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationFocusView : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationFocusView(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationFocusView") {}
    public:
        void Show(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("Show", __callArgs, 1); }
        void ShowMany(void* nationIds) const { void* __callArgs[] = { nationIds }; CallStatic("ShowMany", __callArgs, 1); }
        void Dismiss() const { CallStatic("Dismiss", nullptr, 0); }
    };
}
