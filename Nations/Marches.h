#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class Marches : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Marches(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "Marches") {}
    public:
        void Publish(void* openTo, int count) const { void* __callArgs[] = { openTo, &count }; CallStatic("Publish", __callArgs, 2); }
        void PublishAccess(void* pairs, int idCapacity) const { void* __callArgs[] = { pairs, &idCapacity }; CallStatic("PublishAccess", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        int64_t AccessKey(int owner, int user) const { void* __callArgs[] = { &owner, &user }; return CallStaticValue<int64_t>("AccessKey", __callArgs, 2); }
        int OpenToOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("OpenToOf", __callArgs, 1); }
        bool OpensToOthers(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("OpensToOthers", __callArgs, 1); }
        bool HasAccess(int owner, int user) const { void* __callArgs[] = { &owner, &user }; return CallStaticValue<bool>("HasAccess", __callArgs, 2); }
        bool Open(int owner, int user) const { void* __callArgs[] = { &owner, &user }; return CallStaticValue<bool>("Open", __callArgs, 2); }
        bool AccessOnly(int owner, int user) const { void* __callArgs[] = { &owner, &user }; return CallStaticValue<bool>("AccessOnly", __callArgs, 2); }
        bool Any() const { return ReadStaticField<bool>("Any"); }
        void Any(bool value) const { WriteStaticField<bool>("Any", value); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
