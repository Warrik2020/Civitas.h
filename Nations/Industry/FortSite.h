#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class FortSite : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FortSite(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "FortSite") {}
    public:
        int tileIndex() const { return ReadField<int>("tileIndex"); }
        void SetTileIndex(int value) const { WriteField<int>("tileIndex", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        int builderNationId() const { return ReadField<int>("builderNationId"); }
        void SetBuilderNationId(int value) const { WriteField<int>("builderNationId", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
    };
}
