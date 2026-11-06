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
        void Member(int id, int serial, void* v, void* c, void* u, void* t) const { void* args[] = { &id, &serial, v, c, u, t }; Call("Member", args, 6); }
        void Commit() const { Call("Commit", nullptr, 0); }
        void* CompareMember(int k, void* v, void* c, void* u, void* t) const { void* args[] = { &k, v, c, u, t }; return Call("CompareMember", args, 5); }
        void* p() const { return ReadField<void*>("p"); }
        void SetP(void* value) const { WriteField<void*>("p", value); }
        void* c() const { return ReadField<void*>("c"); }
        void SetC(void* value) const { WriteField<void*>("c", value); }
        void* uv() const { return ReadField<void*>("uv"); }
        void SetUv(void* value) const { WriteField<void*>("uv", value); }
    };
}
