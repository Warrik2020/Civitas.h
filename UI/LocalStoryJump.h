#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LocalStoryJump : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalStoryJump(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LocalStoryJump") {}
    public:
        void ToArc(void* a) const { void* args[] = { a }; CallStatic("ToArc", args, 1); }
        void ToNation(int id) const { void* args[] = { &id }; CallStatic("ToNation", args, 1); }
        void ToTile(int tile) const { void* args[] = { &tile }; CallStatic("ToTile", args, 1); }
    };
}
