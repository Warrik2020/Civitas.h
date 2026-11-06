#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class StateShadeRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateShadeRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "StateShadeRenderer") {}
    public:
        void* FillTable(int capacity) const { void* __callArgs[] = { &capacity }; return Call("FillTable", __callArgs, 1); }
        void* StateTable(int capacity) const { void* __callArgs[] = { &capacity }; return Call("StateTable", __callArgs, 1); }
        void BeginPass(void* p, void* owner, void* stateId, int fillCount, int stateCount, void* chunks = nullptr) const { void* __callArgs[] = { &p, owner, stateId, &fillCount, &stateCount, chunks }; Call("BeginPass", __callArgs, 6); }
        void Step() const { Call("Step", nullptr, 0); }
        void Blank() const { Call("Blank", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
