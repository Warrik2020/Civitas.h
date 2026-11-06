#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapModeHotkeys : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapModeHotkeys(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapModeHotkeys") {}
    public:
        void Caption(const char* eyebrow, const char* title, const char* hint) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(eyebrow ? eyebrow : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(hint ? hint : "") : nullptr; void* args[] = { managed_0, managed_1, managed_2 }; CallStatic("Caption", args, 3); }
    };
}
