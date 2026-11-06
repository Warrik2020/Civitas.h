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
        void ToArc(void* a) const { void* __callArgs[] = { a }; CallStatic("ToArc", __callArgs, 1); }
        void ToNation(int id) const { void* __callArgs[] = { &id }; CallStatic("ToNation", __callArgs, 1); }
        void ToTile(int tile) const { void* __callArgs[] = { &tile }; CallStatic("ToTile", __callArgs, 1); }
    };
}
