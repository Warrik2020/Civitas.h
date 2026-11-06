#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class ConversionOrder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ConversionOrder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "ConversionOrder") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int fromRoot() const { return ReadField<int>("fromRoot"); }
        void fromRoot(int value) const { WriteField<int>("fromRoot", value); }
        int toRoot() const { return ReadField<int>("toRoot"); }
        void toRoot(int value) const { WriteField<int>("toRoot", value); }
        void* states() const { return ReadField<void*>("states"); }
        void states(void* value) const { WriteField<void*>("states", value); }
        int next() const { return ReadField<int>("next"); }
        void next(int value) const { WriteField<int>("next", value); }
        int startedWorldTick() const { return ReadField<int>("startedWorldTick"); }
        void startedWorldTick(int value) const { WriteField<int>("startedWorldTick", value); }
        int nextWorldTick() const { return ReadField<int>("nextWorldTick"); }
        void nextWorldTick(int value) const { WriteField<int>("nextWorldTick", value); }
        int converted() const { return ReadField<int>("converted"); }
        void converted(int value) const { WriteField<int>("converted", value); }
        int refused() const { return ReadField<int>("refused"); }
        void refused(int value) const { WriteField<int>("refused", value); }
    };
}
