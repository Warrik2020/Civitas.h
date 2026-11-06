#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class GameDate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameDate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "GameDate") {}
    public:
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        int GetHashCode() const { return CallValue<int>("GetHashCode", nullptr, 0); }
        void* ToString() const { return Call("ToString", nullptr, 0); }
        int year() const { return ReadField<int>("year"); }
        int month() const { return ReadField<int>("month"); }
        int day() const { return ReadField<int>("day"); }
    };
}
