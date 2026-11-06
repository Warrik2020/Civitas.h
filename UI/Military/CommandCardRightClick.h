#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CommandCardRightClick : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandCardRightClick(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CommandCardRightClick") {}
    public:
        void OnPointerClick(void* e) const { void* args[] = { e }; Call("OnPointerClick", args, 1); }
        void* click() const { return ReadField<void*>("click"); }
        void SetClick(void* value) const { WriteField<void*>("click", value); }
    };
}
