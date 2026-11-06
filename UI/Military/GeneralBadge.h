#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class GeneralBadge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GeneralBadge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "GeneralBadge") {}
    public:
        void* Make(void* parent, float disc, bool keycap) const { void* args[] = { parent, &disc, &keycap }; return CallStatic("Make", args, 3); }
        void Set(void* g, void* color, int digit = 0) const { void* args[] = { g, color, &digit }; Call("Set", args, 3); }
        void* Initials(void* g) const { void* args[] = { g }; return CallStatic("Initials", args, 1); }
    };
}
