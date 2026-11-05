#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class AchievementWatcher : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AchievementWatcher(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "AchievementWatcher") {}
    };
}
