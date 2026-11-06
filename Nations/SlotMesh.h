#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SlotMesh : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SlotMesh(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SlotMesh") {}
    public:
        void Invalidate() const { Call("Invalidate", nullptr, 0); }
        void Begin() const { Call("Begin", nullptr, 0); }
        void Member(int id, int serial, void* v, void* c, void* u, void* t) const { void* __callArgs[] = { &id, &serial, v, c, u, t }; Call("Member", __callArgs, 6); }
        void Commit() const { Call("Commit", nullptr, 0); }
        void* CompareMember(int k, void* v, void* c, void* u, void* t) const { void* __callArgs[] = { &k, v, c, u, t }; return Call("CompareMember", __callArgs, 5); }
    };
}
