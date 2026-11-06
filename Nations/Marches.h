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
        void Publish(void* openTo, int count) const { void* args[] = { openTo, &count }; CallStatic("Publish", args, 2); }
        void PublishAccess(void* pairs, int idCapacity) const { void* args[] = { pairs, &idCapacity }; CallStatic("PublishAccess", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        int64_t AccessKey(int owner, int user) const { void* args[] = { &owner, &user }; return CallStaticValue<int64_t>("AccessKey", args, 2); }
        int OpenToOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("OpenToOf", args, 1); }
        bool OpensToOthers(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("OpensToOthers", args, 1); }
        bool HasAccess(int owner, int user) const { void* args[] = { &owner, &user }; return CallStaticValue<bool>("HasAccess", args, 2); }
        bool Open(int owner, int user) const { void* args[] = { &owner, &user }; return CallStaticValue<bool>("Open", args, 2); }
        bool AccessOnly(int owner, int user) const { void* args[] = { &owner, &user }; return CallStaticValue<bool>("AccessOnly", args, 2); }
        bool Any() const { return ReadStaticField<bool>("Any"); }
        void SetAny(bool value) const { WriteStaticField<bool>("Any", value); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
