#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class StatePickOutline : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StatePickOutline(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "StatePickOutline") {}
    public:
        void Show(bool on) const { void* args[] = { &on }; Call("Show", args, 1); }
        void Draw(int picked, int hovered) const { void* args[] = { &picked, &hovered }; Call("Draw", args, 2); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
