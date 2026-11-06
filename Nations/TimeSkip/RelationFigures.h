#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class RelationFigures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RelationFigures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "RelationFigures") {}
    public:
        int other() const { return ReadField<int>("other"); }
        void other(int value) const { WriteField<int>("other", value); }
        float opinion() const { return ReadField<float>("opinion"); }
        void opinion(float value) const { WriteField<float>("opinion", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void atWar(bool value) const { WriteField<bool>("atWar", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void allied(bool value) const { WriteField<bool>("allied", value); }
        bool pact() const { return ReadField<bool>("pact"); }
        void pact(bool value) const { WriteField<bool>("pact", value); }
    };
}
