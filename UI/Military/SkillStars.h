#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class SkillStars : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkillStars(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "SkillStars") {}
    public:
        void Set(int lit, int max_, void* litColor, void* dimColor) const { void* __callArgs[] = { &lit, &max_, litColor, dimColor }; Call("Set", __callArgs, 4); }
    };
}
